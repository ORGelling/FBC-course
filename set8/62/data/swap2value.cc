#include "data.ih"

    // by 

void Data::swap2Value(Data &other)
{
    size_t temp = u_value;
    u_value = other.u_value;
    other.u_value = temp;
}
