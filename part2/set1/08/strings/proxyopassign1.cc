#include "strings.ih"

Strings::Proxy &Strings::Proxy::operator=(string const &rhs)
{
    // assign rhs to string being pointed at
    p_owner->cow();                         // } Could refactor with 2.cc
    p_owner->safeAt(p_idx) = rhs;           // } but short and clear already
    return *this;
}
