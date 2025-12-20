#include "strings.ih"

    // by 

Strings::Proxy::operator string const &() const
{
    return p_owner->safeAt(p_idx);
}
