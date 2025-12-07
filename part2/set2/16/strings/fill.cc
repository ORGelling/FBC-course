#include "strings.ih"

    // by 

void Strings::fill(size_t argc, char **argv)
{
    for (size_t index = 0; index != argc; ++index)
    {
        //if (index == 2)
          //  throw bad_alloc{};
        d_str[index] = new string(argv[index]);
        ++d_size;                               // we only increment d_size
    }                                           // after new allocates another
}                                               // string to simplify cleanup.
