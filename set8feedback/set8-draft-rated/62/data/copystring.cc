#include "data.ih"

    // by 

void Data::copyString(Data const &tmp)
{
    new(&u_word) string{ tmp.u_word };
}
