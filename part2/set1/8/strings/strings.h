#ifndef INCLUDED_STRINGS_
#define INCLUDED_STRINGS_

#include <iosfwd>
#include <string>

class Strings
{
    class Proxy;                    // fwd declaring for use in retvals
    friend class Proxy;
    friend std::ostream &operator<<(std::ostream &out, 
                                            Proxy const &proxy);
    
    size_t       d_size;
    std::string *d_str;
    size_t      *d_share;               // share count

    public:
        
        struct POD
        {
            size_t      size;
            std::string *str;
        };

        Strings();                                      // 1.cc
        Strings(int argc, char *argv[]);                // 2.cc
        Strings(char *environLike[]);                   // 3.cc
        Strings(std::istream &in);                      // 4.cc
        
        Strings(Strings const &other);                  // 5.cc shares data!
        Strings(Strings &&other);
        
        ~Strings();                                     // share aware
        
        Strings &operator=(Strings const &other);
        Strings &operator=(Strings &&other);

        void swap(Strings &other);              

        size_t size() const;
        std::string const *data() const;
        POD release();

        Proxy operator[](size_t idx);                   // implement COW
        std::string const &operator[](size_t idx) const;

        Strings &operator+=(std::string const &next);   // move aware?
                
    private:
        void fill(char *ntbs[]);                    // fill prepared d_str

        std::string &safeAt(size_t idx) const;      // private backdoor
        std::string *enlarge();

        static size_t count(char *environLike[]);   // # elements in env.like

        void cow();
        void freeCopy();                            // clean copy for COW
        
        // Proxy for cow string viewing and amending
        class Proxy
        {
            friend class Strings;
            
            Strings *p_owner;
            size_t   p_idx;
            
            Proxy(Strings &str, size_t idx);
            
            public:
                //std::string const &value() const;
                operator std::string const &() const;   // conversion for rhs
            
                Proxy &operator=(std::string const &rhs);       // 1.cc
                Proxy &operator=(std::string &&rhs);            // 2.cc
                
                Proxy &operator=(Proxy const &rhs);             // 3.cc
        };

};

inline size_t Strings::size() const         // potentially dangerous practice:
{                                           // inline accessors
    return d_size;
}

inline std::string const *Strings::data() const
{
    return d_str;
}

inline std::string const &Strings::operator[](size_t idx) const
{
    return safeAt(idx);
}

//inline std::string const &Strings::Proxy::value() const
//{
//    return p_owner->safeAt(p_idx);
//}

#endif

