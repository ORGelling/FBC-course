#include "strings.ih"

    // by 

Strings::Strings(size_t count, string const &str)
//:                     // explicitly constructing empty string unnecessary
//    string()          // empty string is default constructed
{
    reserve(size() + count * str.size());       // avoids repeat allocs
    for (size_t index = 0; index != count; ++index)
        append(str);
}
