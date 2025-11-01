#include "strings.ih"

Strings &Strings::operator=(Strings const &other)
{
    Strings temp(other);
    swap(temp);
    return *this;// = move(temp);
}
