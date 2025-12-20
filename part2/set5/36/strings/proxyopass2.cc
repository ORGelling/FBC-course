#include "strings.ih"

    // by 

Strings::Proxy &Strings::Proxy::operator=(string &&rhs)
{
    p_owner->cow(p_idx);
    p_owner->safeAt(p_idx) = move(rhs);
    return *this;
}
