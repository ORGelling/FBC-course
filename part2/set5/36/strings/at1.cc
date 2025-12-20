#include "strings.ih"

    // by 

Strings::Proxy Strings::at(size_t idx)
{
    static_cast<void>(d_data.at(idx));          // test oob with vector at()
    return Proxy(*this, idx);                   // rest can simply use op[]
}
