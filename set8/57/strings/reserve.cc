#include "strings.ih"

    // by 

void Strings::reserve(size_t const newCapacity)
{
    if (newCapacity > d_capacity)
        enlarge(newCapacity);
}
