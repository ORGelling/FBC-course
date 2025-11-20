#ifndef INCLUDED_STRINGS_
#define INCLUDED_STRINGS_

#include <iosfwd>

class Strings
{
    size_t d_size;
    size_t d_capacity = 1;
    std::string **d_data = nullptr;
    
    public:
        Strings();
        Strings(size_t argc, char **argv);
        Strings(char **environLike);
        Strings(std::istream &in);
        
        ~Strings();                         // Added destructor.
               
        void swap(Strings &other);              

        size_t size() const;
        std::string const *const *data() const;

        std::string const &at(size_t idx) const;
        std::string &at(size_t idx);
        
        void resize(size_t const newSize);
        void reserve(size_t const newCapacity);
        
        size_t capacity() const;
        
        void add(std::string const &next);          // add another element

    private:
        void fill(char **ntbs);                    // fill prepared d_str

        std::string &safeAt(size_t idx) const;      // private backdoor
        
        void enlarge(size_t const newSize);
        std::string **rawPointers(size_t const newSize);
        void copyPtrsInto(std::string **rawMemory);
        void setNull(size_t const from, size_t const to);
        void initialiseStrings(size_t const newSize);
        
        void destroy();
        void destroyStrings(size_t const cutoff);
        
        static size_t count(char **environLike);   // # elements in env.like
};

inline size_t Strings::size() const         // potentially dangerous practice:
{                                           // inline accessors
    return d_size;
}

inline std::string const *const *Strings::data() const
{
    return d_data;
}

inline std::string const &Strings::at(size_t idx) const
{
    return safeAt(idx);
}

inline std::string &Strings::at(size_t idx)
{
    return safeAt(idx);
}

inline size_t Strings::capacity() const
{
    return d_capacity;
}
        
#endif
