#include "strings.ih"

Strings::Strings()
:
    d_size(0),
    d_data(rawPointers(1))
{
    setNull(0, d_capacity); // Not really needed I think?
}
