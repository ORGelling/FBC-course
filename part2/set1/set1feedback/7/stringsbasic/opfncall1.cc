#include "strings.ih"

Strings const &Strings::operator()(char const *separator)
{
    d_sep = separator;
    return *this;
}
