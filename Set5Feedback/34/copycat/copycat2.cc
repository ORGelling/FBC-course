#include "copycat.ih"

CopyCat::CopyCat(size_t const argc, char const *const *argv)
:
    d_size(argc),
    d_data(duplicate(argv, argc))
{}
