#ifndef INCLUDED_STRINGS_
#define INCLUDED_STRINGS_

#include <string>

class Strings;              // fwd declared for use in this free function:
void stdInsertion(std::ostream &out, Strings const &str, size_t index);
                            // kept here for default initialising of d_manip
class Strings
{
    // insertion operator friend function
    friend std::ostream &operator<<(std::ostream &out, Strings const &str);
    
    // standard data members
    size_t d_size = 0;
    std::string *d_str = 0;
    
    // manipulator members
    mutable std::string d_sep = "\n";
    mutable void (*d_manip)(std::ostream &out, Strings const &str, 
                                                size_t index) = &stdInsertion; 

    public:
        Strings() = default;
        Strings(int argc, char **argv);                             // 2.cc
        Strings(char **environLike);                                // 3.cc

        Strings(Strings const &other);              // see part 1: allocation
        Strings(Strings &&tmp);                     // see part 1: allocation

        ~Strings();

        Strings &operator=(Strings const &rhs);     // see part 1: allocation
        Strings &operator=(Strings &&rhs);          // see part 1: allocation

        void swap(Strings &other);              

        size_t size() const;

        std::string const &at(size_t idx) const;
        std::string &at(size_t idx);

        void add(std::string const &next);              // add another string
        
        std::string sep() const;
                                                        // function call ops
        Strings const &operator()(char const *separator);           // 1.cc
        Strings const &operator()(                                  // 2.cc
            void (*manip)(std::ostream &out, Strings const &str, size_t index)
        );
        
    private:
        std::string *duplicateAndEnlarge();
        
        std::ostream &insertInto(std::ostream &out) const;

};

// other manipulator functions can be added here:
void only2(std::ostream &out, Strings const &str, size_t index);

//:

inline size_t Strings::size() const         // potentially dangerous practice:
{                                           // inline accessors
    return d_size;
}

inline std::string const &Strings::at(size_t idx) const
{
    return d_str[idx];
}

inline std::string &Strings::at(size_t idx)
{
    return d_str[idx];
}

#endif
