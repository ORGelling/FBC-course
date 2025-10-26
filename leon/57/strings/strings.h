#ifndef INCLUDED_STRINGS_
#define INCLUDED_STRINGS_

#include <iosfwd>

class Strings
{
    size_t d_size = 0;
    size_t d_capacity = 1;          // ** new
    std::string **d_str;            // ** modified: now a double *

    public:
        Strings();                          // ** modified      1

        Strings(size_t argc, char **argv);  // ** modified      5
        Strings(char **environLike);        // ** modified      4

        Strings(Strings const &other);      // new
        Strings(Strings &&tmp);             // new

        void operator=(Strings const &other); // new
        void operator=(Strings &&tmp);        // new

        ~Strings();                         // ** modified

        size_t size() const;
        size_t capacity() const;            // ** new

        std::string const &at(size_t idx) const;    // for const-objects
        std::string &at(size_t idx);                // for non-const objects

                                            // ** modified
        void add(std::string const &next);          // add another element

        void resize(size_t newSize);        // ** new
        void reserve(size_t newCapacity);   // ** new

        void swap(Strings &other);          // ** new
        
    private:
                                                // ** modified
        std::string &safeAt(size_t idx) const;  // private backdoor

                                                // ** modified
        void storageArea();                     // to store the next str.

        void enlarge();                         // ** new: to d_capacity

        void destroy();                 
                                                // ** new
        static std::string **rawPointers(size_t nPointers);
};

inline size_t Strings::size() const         // potentially dangerous practice:
{                                           // inline accessors
    return d_size;
}

inline size_t Strings::capacity() const     // potentially dangerous practice:
{                                           // inline accessors
    return d_capacity;
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

