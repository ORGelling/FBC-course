#include "fillunique.ih"

    // by 

FillUnique::FillUnique(size_t size, size_t min, size_t max)
:
    d_size(size),
    d_min(min),
    d_max(max),
    d_rng(d_min, d_max)
{}
