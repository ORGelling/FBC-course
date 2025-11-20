#include "strings.ih"

Strings::Strings()
:
    d_size(0),
    d_str(0),
    d_share(new size_t(1))
{}
