#include "arg.ih"

    // by 

size_t Arg::option(string *value, char const *longOption) const
{
    return d_longOption ? d_longOption->size(value, longOption) : 0;
}
