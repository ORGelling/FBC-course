#include "numbers.ih"

    // by 

Numbers::Numbers(size_t size, int value)
:
    d_size(size),
    d_nums(new int[size])
{
    setNums(value);
}
