#include "data.ih"

    // by 

Data::Data(double const *doublePtr)
:
    u_double(new double[10])
{
    for (size_t index = 0; index != 10; ++index)
        u_double[index] = doublePtr[index];
}
