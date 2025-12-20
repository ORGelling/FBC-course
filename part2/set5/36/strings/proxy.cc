#include "strings.ih"

    // by 

Strings::Proxy::Proxy(Strings &str, size_t idx)
:
    p_owner(str),
    p_idx(idx)
{
    cerr << "Creating Proxy\n";
}
