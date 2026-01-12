#include "strings.ih"

    // by 

Strings::Proxy Strings::at(size_t idx)
{                                           // maybe WHEEL since vector.at()
    //JB: Exactly. If the caller ignores the return value, the segfault won't
    //JB: happen. So this check may be a little premature.
    //JB: Then again, you're fine if you document that idx must be within
    //JB: bounds.
    if (idx >= d_data.size())               // can already check bounds?
        throw out_of_range{ "Index is out of range" };
                                                    
    // static_cast<void>(d_data.at(idx));           // It can but is unclear
                                                    // and probably TC
    
    return Proxy(*this, idx);                   // Proxies handle cow
}
