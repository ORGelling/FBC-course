#include "strings.ih"

    // by 

string &Strings::idx(size_t idx) const
{
    return *d_data[idx];
}                                   // can be inlined but not really needed
