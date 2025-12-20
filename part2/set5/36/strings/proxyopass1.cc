#include "strings.ih"

    // by 

Proxy &Strings::Proxy::operator=(string const &rhs)
{
    p_owner->cow(p_idx);
    *(p_owner->d_data[p_idx]) = rhs;
    return *this;
}
