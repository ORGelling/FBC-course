#include "strings.ih"

    // by enlarge.cc

void Strings::copyStringsFrom(string **otherData)
{
    for (size_t index = 0; index != d_size; ++index)
        d_data[index] = new string(*otherData[index]);
}
