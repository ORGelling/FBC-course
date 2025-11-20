#include "wrap.ih"

    // by 

Wrap::Wrap(Wrap &&other)
:
    d_type(other.d_type),
    d_data(move(other.d_data), d_type)
{}
