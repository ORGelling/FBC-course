#include "strings.ih"

    // by resize.cc

void Strings::destroyPart(size_t const newSize)
{
    for (size_t index = d_size; index-- != newSize; )
        d_data[index].~string();
}
