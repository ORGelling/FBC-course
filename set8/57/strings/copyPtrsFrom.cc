#include "strings.ih"

    // by enlarge.cc

void Strings::copyPtrsFrom(string **other)
{
    for (size_t index = 0; index != d_size; ++index)
        d_data[index] = new string(*other.d_data[index]);
}
