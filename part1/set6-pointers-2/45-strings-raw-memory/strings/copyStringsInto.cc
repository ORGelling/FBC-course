#include "strings.ih"

    // by enlarge.cc

void Strings::copyStringsInto(string *stringArray)
{
    for (size_t index = 0; index != d_size; ++index)
        new (stringArray + index) string(d_data[index]);
}
