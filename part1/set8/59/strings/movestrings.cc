#include "strings.ih"

void Strings::moveStringsFrom(string *data)
{
    for (size_t index = 0; index != d_size; ++index)
        d_str[index] = move(data[index]);
}
