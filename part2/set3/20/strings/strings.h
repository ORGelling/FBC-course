#ifndef INCLUDED_STRINGS_
#define INCLUDED_STRINGS_

#include <string>

class Strings: public std::string
{
    public:
        using std::string::string;
        using std::string::operator=;
        
        Strings(size_t count, std::string const &str);
};
        
#endif
