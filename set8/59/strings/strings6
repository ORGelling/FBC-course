#include "strings.ih"

Strings::Strings(Strings const &other)
:
    d_size(other.d_size),
    d_str(new string[d_size])
{
    copyStringsFrom(other.d_str);
}
