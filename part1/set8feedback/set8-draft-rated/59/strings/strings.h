// HB: rating: 1

#ifndef INCLUDED_STRINGS_
#define INCLUDED_STRINGS_

#include <iosfwd>

class Strings
{
    size_t d_size;
    std::string *d_str;
    std::string *(Strings::*d_enlarge)();
    
    public:
        struct POD
        {
            size_t      size;
            std::string *str;
        };

        Strings();
        Strings(int argc, char **argv);
        Strings(char **environLike);
        Strings(std::istream &in);
        Strings(size_t nIterate, bool copy = true); // ADD
        //Strings(Strings const &other);
        //Strings(Strings &&other);
        
        ~Strings();

        //Strings &operator=(Strings const &other);
        //Strings &operator=(Strings &&other);
        
        void swap(Strings &other);              

        size_t size() const;
        std::string const *data() const;
        POD release();

        std::string const &at(size_t idx) const;
        std::string &at(size_t idx);

        void add(std::string const &next);  
                                                    // add another element
        void display() const;

    private:
        void fill(char **ntbs);                     // fill prepared d_str

        std::string &safeAt(size_t idx) const;      // private backdoor
        //std::string *enlarge(bool const copy = true);       // Fix/modify?
        std::string *enlargeByCopy();                       // ADD
        std::string *enlargeByMove();                       // ADD
        void iterate(char **environLike);                   // ADD

        void copyStringsFrom(std::string *data);
        void moveStringsFrom(std::string *data);
        
        //static char *ntbsCopy(char const *ntbs);
        //static char **copyEnvs();
        static size_t count(char **environLike);    // # elements in env.like
        //static void deleteEnvs(char **environLike);
};

inline size_t Strings::size() const         // potentially dangerous practice:
{                                           // inline accessors
    return d_size;
}

inline std::string const *Strings::data() const
{
    return d_str;
}

inline std::string const &Strings::at(size_t idx) const
{
    return safeAt(idx);
}

inline std::string &Strings::at(size_t idx)
{
    return safeAt(idx);
}

        
#endif

