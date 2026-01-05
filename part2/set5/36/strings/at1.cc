#include "strings.ih"

    // by 

Strings::Proxy Strings::at(size_t idx)
{                                           // maybe WHEEL since vector.at()
    if (idx >= d_data.size())               // can already check bounds?
        throw out_of_range{ "Index is out of range" };
                                                    
    // static_cast<void>(d_data.at(idx));           // It can but is unclear
                                                    // and probably TC
    
    return Proxy(*this, idx);                   // Proxies handle cow
}
