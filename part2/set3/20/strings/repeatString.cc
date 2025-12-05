#include "strings.ih"

    // by 

void Strings::repeatString(size_t count, string const &str)
{
    for (size_t index = 0; index != count; ++index)
        *this += str;
}
