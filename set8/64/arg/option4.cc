#include "arg.ih"

    // by 

size_t Arg::option(string *value, char const *longOption) const
{
    size_t temp = d_longOption.size(value, longOption);
    
    if (not temp)               // Not exactly same as pointing value to
        *value = "";            // 0/null but works well enough for now
                                // But that doesn't quite work with passing
    return temp;                // address of local string as recommended
}
