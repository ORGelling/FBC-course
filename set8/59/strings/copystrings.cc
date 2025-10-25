#include "strings.ih"

void Strings::copyStringsFrom(string *data)
{
    for (size_t index = 0; index != d_size; ++index)
        d_str[index] = data[index];
}
