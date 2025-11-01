#include "data.ih"

    // by 

void Data::moveValue(Data &&tmp)
{
    u_value = tmp.u_value;
}
