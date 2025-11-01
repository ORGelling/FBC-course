#include "arg.ih"

    // by 

size_t Arg::option(int opt) const
{
    return d_option ? d_option->size(opt) : 0;
}
