#include "strings.ih"

Strings::Strings(size_t argc, char **argv)
:
    Strings()
{
    for (size_t begin = 0; begin != argc; ++begin)
        add(argv[begin]);
}
