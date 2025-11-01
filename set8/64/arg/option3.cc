#include "arg.ih"

    // by 

size_t Arg::option(string *value, int option) const
{
    size_t temp = d_option.size(value, option);
    
    if (not temp)
        *value = "";
    
    return temp;
}
