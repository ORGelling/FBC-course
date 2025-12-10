#include "strings.ih"

    // by 

void Strings::repeatString(size_t count, string const &str)
{
    reserve(size() + count * str.size());           // avoids repeat allocs?
    for (size_t index = 0; index != count; ++index)
        append(str);
}
