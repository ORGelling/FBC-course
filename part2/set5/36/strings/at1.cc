#include "strings.ih"

    // by 

Strings::Proxy Strings::at(size_t idx)
{// this check is kinda weird and unclear
    static_cast<void>(d_data.at(idx));          // test oob with vector at()
    return Proxy(*this, idx);                   // rest can simply use op[]
}
