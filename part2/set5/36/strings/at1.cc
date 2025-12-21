#include "strings.ih"

    // by 

Strings::Proxy Strings::at(size_t idx)
{
    if (idx >= d_data.size())
        throw out_of_range{ "Index is out of range" };
    // this check is kinda weird and unclear
    // static_cast<void>(d_data.at(idx));       // test oob with vctr's at()
    return Proxy(*this, idx);                   // rest can simply use op[]
}
