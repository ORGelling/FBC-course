#include "strings.ih"

Strings::Proxy &Strings::Proxy::operator=(string const &rhs)
{
    // assign rhs to string being pointed at
    p_owner->cow();
    p_owner->safeAt(p_idx) = rhs;
    return *this;
}
