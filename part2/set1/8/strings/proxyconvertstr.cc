#include "strings.ih"

Strings::Proxy::operator string const &() const
{
    return p_owner->safeAt(p_idx);
}
