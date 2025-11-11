#include "data.ih"

    // by 

void Data::copyDouble(Data const &tmp)
{
    u_double = new double[10];
    copyContents(tmp.u_double);
}
