#include "strings.ih"

    // by 

string &Strings::operator[](size_t idx)
{
    return Proxy(*this, idx);
}
