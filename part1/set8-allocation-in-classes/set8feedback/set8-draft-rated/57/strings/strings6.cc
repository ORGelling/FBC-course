#include "strings.ih"

    // Move constructor

// HB: way TC
Strings::Strings(Strings &&other)
:
    d_size(other.d_size),
    d_capacity(other.d_capacity),
    d_data(other.d_data)
{
    other.d_size = 0;
    other.d_capacity = 0;
    other.d_data = nullptr;
}
