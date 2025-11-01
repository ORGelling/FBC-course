#include "arg.ih"

    // by 

char const *Arg::arg(unsigned idx) const
{
    return (idx >= d_nArgs ? nullptr : d_argv[optind + idx]);
}
