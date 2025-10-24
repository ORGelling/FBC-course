#include "strings.ih"

Strings &Strings::operator=(Strings &&other)
{
    swap(other);
    return *this;
}
