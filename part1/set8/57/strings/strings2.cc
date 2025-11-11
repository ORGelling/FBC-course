#include "strings.ih"

Strings::Strings(size_t argc, char **argv)
:
    d_size(argc),
    d_capacity(argc),
    d_data(rawPointers(d_capacity))
{
    fill(argv);
}
