#include "numbers.ih"

    // by 

Numbers::Numbers(Numbers const &other)
:
    Numbers(other.d_size)
{
    copyFrom(other.d_data);
}
