#include "numbers.ih"

    // by 

Numbers::Numbers(size_t count)
:
    d_size(count),
    d_data(allocateMemory(count))
{}
