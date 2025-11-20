#include "numbers.ih"

    // by 

Numbers::Numbers(size_t size)
:
    d_size(size),
    d_nums(new int[size]())
{}
