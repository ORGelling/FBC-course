#include "strings.ih"

Strings::Strings(Strings &&other)
:
    d_size(other.d_size),
    d_str(other.d_str)
{
    other.d_size = 0;
    other.d_str = nullptr;
}
