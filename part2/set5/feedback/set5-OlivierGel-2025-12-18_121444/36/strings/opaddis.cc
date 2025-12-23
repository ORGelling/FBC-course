#include "strings.ih"

    // by 

Strings &Strings::operator+=(string const &str)
{
    d_data.push_back(make_shared<string>(str));
    return *this;
}
