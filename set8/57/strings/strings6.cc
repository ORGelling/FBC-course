#include "strings.ih"

    // Move constructor

Strings::Strings(Strings &&other)
:
    d_size(argc),
    d_capacity(argc), // argc is never gonna be 0 I think?
    d_data(rawPointers(d_capacity))
{
    //setNull(0, d_capacity); //JB: IRE
    fill(argv);
}
