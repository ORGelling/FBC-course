#include "numbers.ih"

    // by 

Numbers::Numbers(Numbers &&tmp)
:
    Numbers()
{
    swap(tmp);
}
