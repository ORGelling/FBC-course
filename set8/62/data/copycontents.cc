#include "data.ih"

    // by 

void Data::copyContents(double const *tmp)
{
    for (size_t index = 0; index != 10; ++index) // default size 10
        u_double[index] = tmp[index];
}
