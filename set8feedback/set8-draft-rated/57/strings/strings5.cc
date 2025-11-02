#include "strings.ih"

    // Copy constructor

Strings::Strings(Strings const &other)
:
    d_size(other.d_size),
    d_capacity(other.d_capacity), // HB: we insist you copy from other.d_size,
                                  // HB: since that fits and saves memory
    d_data(rawPointers(other.d_capacity))
{
    // Use temp and then swap?
    // HB: not necessary: you'd do eaxctly what you'd do here anyway, 
    // HB: so you're just being inefficient
    copyStringsFrom(other.d_data);
}
