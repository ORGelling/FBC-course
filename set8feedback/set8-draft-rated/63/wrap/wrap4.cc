#include "wrap.ih"

    // by 

Wrap::Wrap(Wrap const &other)
:
    d_type(other.d_type),
    d_data(other.d_data, d_type)
{}
