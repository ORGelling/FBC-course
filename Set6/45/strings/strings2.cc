#include "strings.ih"

Strings::Strings(size_t argc, char **argv)
:
    d_size(argc),
    d_capacity(argc),
    d_data(rawStrings(argc))
{
    fill(argv);
}
