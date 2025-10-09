#include "copycat.ih"

    // by CopyCat() (inline in copycat.h)

CopyCat::CopyCat(char const *const *data)
:
    d_size(nElements(data)),
    d_data(duplicate(data, d_size))
{}

// Copies any environ-like variable
