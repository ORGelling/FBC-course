#include "data.ih"

    // by 

Data::Data(double const *doublePtr)
:
    u_double(new double[10])
{
    copyContents(doublePtr);
}
