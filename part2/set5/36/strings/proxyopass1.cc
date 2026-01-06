#include "strings.ih"

    // by 

Strings::Proxy &Strings::Proxy::operator=(string const &rhs)
{
    p_owner->cow(p_idx); 
    p_owner->idx(p_idx) = rhs;
    
    return *this;
}
