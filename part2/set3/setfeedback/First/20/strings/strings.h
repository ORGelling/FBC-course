#ifndef INCLUDED_STRINGS_
#define INCLUDED_STRINGS_

#include <string>

class Strings: public std::string
{
    public:
        using std::string::string;
        using std::string::operator=;
        
        Strings() = default;
        Strings(Strings const &other) = default;
        Strings(Strings &&tmp) = default;
        
        Strings(size_t count, std::string const &str);
        
        ~Strings() = default;
        
        Strings &operator=(Strings const &other) = default;
        Strings &operator=(Strings &&other) = default;
        
    private:
        void repeatString(size_t count, std::string const &str);
};
        
#endif
