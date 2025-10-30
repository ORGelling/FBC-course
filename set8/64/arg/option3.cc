#include "arg.ih"

    // by 

size_t Arg::option(string *value, int option) const
{
    size_t temp = d_option ? d_option->size(value, option) : 0;
    
    if (not temp)
        *value = "";
    
    return temp;
}
