#include "data.ih"

    // by 

void Data::copyDouble(Data const &tmp)
{
    u_double = new double[10];
    for (size_t index = 0; index != 10, ++index) // default size 10
        u_double[index] = tmp.u_double[index];
}
