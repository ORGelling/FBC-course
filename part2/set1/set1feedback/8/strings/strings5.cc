#include "strings.ih"

Strings::Strings(Strings const &other)
:
    d_size(other.d_size),
    d_str(other.d_str),
    d_share(other.d_share)
{
    ++*d_share;
}
