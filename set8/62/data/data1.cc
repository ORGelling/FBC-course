#include "data.ih"

    // by 

Data::Data(double *doublePtr)
:
    u_double(doublePtr)
{
    doublePtr = nullptr;
}
