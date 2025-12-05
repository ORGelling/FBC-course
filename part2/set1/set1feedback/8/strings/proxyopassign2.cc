#include "strings.ih"

Strings::Proxy &Strings::Proxy::operator=(string &&rhs)
{
    // assign rhs to string being pointed at
    p_owner->cow();                         // } could refactor with 1.cc
    p_owner->safeAt(p_idx) = move(rhs);     // } but short and clear already
    return *this;
}
