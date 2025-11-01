#include "data.ih"

    // by 

void (Data::*Data::s_move[])(Data &&tmp) = 
{
    &Data::moveDouble,
    &Data::moveString,
    &Data::moveValue,
};
