#include "strings.ih"

Strings::Proxy Strings::operator[](size_t idx)
{
    // construct and return Proxy
    return Proxy(*this, idx);       // safeAt() returns emptyString
}                                           // at oob which can be a problem
