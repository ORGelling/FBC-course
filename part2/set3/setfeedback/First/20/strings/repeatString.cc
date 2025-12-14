//JB: ?
#include "strings.ih"

    // by strings1.cc

void Strings::repeatString(size_t count, string const &str)
{
    for (size_t index = 0; index != count; ++index)
        *this += str;
    //JB: Can we avoid the reallocations?
}
