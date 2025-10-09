#include "strings.ih"

    // by enlarge.cc

void Strings::copyPtrsInto(string **rawMemory)
{
    for (size_t index = 0; index != d_capacity; ++index)
        rawMemory[index] = d_data[index];
}
