#include "strings.ih"

Strings::Strings(size_t argc, char **argv)
:
    d_size(argc),
    d_capacity(argc ? argc : 1), // argc is never gonna be 0 I think?
    d_data(rawPointers(d_capacity))
{
    setNull(0, d_capacity);
    fill(argv);
}
