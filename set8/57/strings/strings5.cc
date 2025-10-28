#include "strings.ih"

    // Copy constructor

Strings::Strings(Strings const &other)
:
    d_size(other.d_size),
    d_capacity(other.d_capacity),
    d_data(rawPointers(other.d_capacity))
{
    // Use temp and then swap?
    copyStringsFrom(other.d_data);
}
