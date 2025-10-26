#include "data.ih"

    // by 

void (Data*Data::s_swap[][3])(Data &other) = 
{
    {  &Data::swap2Double,  &Data::swapDoubStr,  &Data::swapDoubVal  },
    {  &Data::swapStrDoub,  &Data::swap2String,  &Data::swapStrVal   },
    {  &Data::swapValDoub,  &Data::swapValStr,   &Data::swap2Value   },
};
