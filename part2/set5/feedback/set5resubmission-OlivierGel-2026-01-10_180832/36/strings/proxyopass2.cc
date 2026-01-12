#include "strings.ih"

    // by 

Strings::Proxy &Strings::Proxy::operator=(string &&rhs)
{
    p_owner->cow(p_idx);
    p_owner->idx(p_idx) = move(rhs);
    
    return *this;
}
