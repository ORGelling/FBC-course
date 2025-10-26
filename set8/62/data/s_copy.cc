#include "data.ih"

    // by 

void (Data*Data::s_copy[])(Data const &tmp) = 
{
    &Data::copyDouble,
    &Data::copyString,
    &Data::copyValue,
};
