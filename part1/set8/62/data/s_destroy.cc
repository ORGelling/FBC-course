#include "data.ih"

    // by 

void (Data::*Data::s_destroy[])() = 
{
    &Data::destroyDouble,
    &Data::destroyString,
    &Data::destroyValue,
};
