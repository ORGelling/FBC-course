#include "strings.ih"

Strings &Strings::operator=(Strings const &tmp)
{
    Strings local(tmp);
    swap(local);
    return *this;// = move(temp);
}
