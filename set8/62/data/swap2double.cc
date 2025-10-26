#include "data.ih"

    // by 

void Data::swap2Double(Data &other)
{
    double *temp = u_double;
    u_double = other.u_double;
    other.u_double = temp;
}
