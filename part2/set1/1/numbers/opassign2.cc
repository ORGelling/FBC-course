#include "numbers.ih"

    // by 

Numbers &Numbers::operator=(Numbers &&tmp)
{
    swap(tmp);
    return *this;
}
