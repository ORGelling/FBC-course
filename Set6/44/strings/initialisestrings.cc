#include "strings.ih"

    // by

void Strings::initialiseStrings(size_t const newSize)
{
    for (size_t index = d_size; index != newSize; ++index)
        d_data[index] = new string;
    
    d_size = newSize;
}
