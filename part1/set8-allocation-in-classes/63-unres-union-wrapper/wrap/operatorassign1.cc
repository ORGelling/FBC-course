#include "wrap.ih"

    // by 

Wrap &Wrap::operator=(Wrap const &other)
{
//  d_data.copyAssign(d_type, other.d_data, other.d_type);
//  d_type = other.d_type;
    Wrap tmp{ other };
    swap(tmp);
    return *this;
}
