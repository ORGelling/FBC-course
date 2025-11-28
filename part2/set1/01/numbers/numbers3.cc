#include "numbers.ih"

    // by 

Numbers::Numbers(size_t size, int *values)
:
    Numbers(size)
{
    copyFrom(values);
}
