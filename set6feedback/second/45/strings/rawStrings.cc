#include "strings.ih"

    // by 

string *Strings::rawStrings(size_t const nStrings)
{
    return static_cast<string *>(operator new(nStrings * sizeof(string)));
}
