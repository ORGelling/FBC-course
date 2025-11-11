#include "numbers.ih"

    // by numbers1.cc

int *Numbers::allocateMemory(size_t const size)
{
    return new int[size];
}
