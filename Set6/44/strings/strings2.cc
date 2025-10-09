#include "strings.ih"

Strings::Strings(size_t argc, char **argv)
:
    d_size(argc),
    d_data(rawPointers(argc))
{
    fill(argv);
}
