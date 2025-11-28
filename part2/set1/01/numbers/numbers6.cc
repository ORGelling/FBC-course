#include "numbers.ih"

    // by 

Numbers::Numbers(Numbers &&tmp)
:
    Numbers(0)
{
    swap(tmp);
}
