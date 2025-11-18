#include "strings.ih"

Strings::Proxy &Strings::Proxy::operator=(string &&rhs)
{
    // assign rhs to string being pointed at
    p_owner->cow();
    p_owner->safeAt(p_idx) = move(rhs);
    return *this;
}
