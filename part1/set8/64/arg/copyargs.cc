#include "arg.ih"

    // by 

void Arg::copyArgs(char const *const *from, char const *const *to)
{
    d_argv = new string[d_nArgs = to - from];
    
    for (size_t idx = 0, end = to - from; idx != end; ++idx, ++from)
        d_argv[idx] = *from;
}
