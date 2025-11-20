#include "data.ih"

    // by 

void Data::moveString(Data &&tmp)
{
    new(&u_word) string{ move(tmp.u_word) };
}
