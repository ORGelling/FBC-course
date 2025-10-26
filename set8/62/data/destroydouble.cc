#include "data.ih"

    // by 

void Data::destroyDouble()
{
    delete[] u_double;
    u_double = nullptr;
}
