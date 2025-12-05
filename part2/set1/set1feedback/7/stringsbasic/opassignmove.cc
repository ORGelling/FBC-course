#include "strings.ih"

Strings &Strings::operator=(Strings &&rhs)
{
    swap(rhs);
    return *this;
}
