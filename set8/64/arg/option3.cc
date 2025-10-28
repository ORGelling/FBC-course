#include "arg.ih"

    // by 

size_t Arg::option(string *value, int option) const
{
    return d_option ? d_option->size(value, option) : 0;
}
