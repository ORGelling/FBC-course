#include "arg.ih"

    // by 

size_t Arg::nOptions() const
{
    return d_option ? d_option->size() : 0;
}
