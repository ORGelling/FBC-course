#include "data.ih"

    // by 

void Data::swapDoubVal(Data &other)
{
    size_t temp = other.u_value;
    other.u_double = u_double;
    u_value = temp;
}
