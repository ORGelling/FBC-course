#include "strings.ih"

Strings::Proxy::Proxy(Strings &str, size_t idx)
:
    p_owner(&str),
    p_idx(idx)
{}
