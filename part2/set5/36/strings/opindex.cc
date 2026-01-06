#include "strings.ih"

    // by 

Strings::Proxy Strings::operator[](size_t idx)
{
    return Proxy(*this, idx);
}                                   // no bounds checking on purpose
