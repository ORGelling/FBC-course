#include "numbers.ih"

    // by 

Numbers::Numbers(Numbers const &other)
:
    d_size(other.d_size),
    d_nums(new int[d_size])
{
    copyFrom(other.d_nums);
}
