#include "arg.ih"

    // by 

size_t Arg::option(string *value, char const *longOption) const
{
    size_t temp = d_longOption ? d_longOption->size(value, longOption) : 0;
    
    if (not temp)
        *value = "";
    
    return temp;
}
