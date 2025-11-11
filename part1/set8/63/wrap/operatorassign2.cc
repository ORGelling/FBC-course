#include "wrap.ih"

    // by 

Wrap &Wrap::operator=(Wrap &&tmp)
{
//  d_data.moveAssign(d_type, std::move(other.d_data), other.d_type);
//  d_type = other.d_type;
    swap(tmp);
    return *this;
}
