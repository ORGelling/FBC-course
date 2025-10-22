#include "strings.ih"

Strings::Strings(size_t argc, char **argv)
:
    d_size(argc),
    d_str(new string[argc])
{
    fill(argv);
}
