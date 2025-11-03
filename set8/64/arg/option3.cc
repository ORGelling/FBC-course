#include "arg.ih"

    // by 

size_t Arg::option(string *value, int option) const
{
    size_t tmp = d_option.size(value, option);
    
    if (not tmp)                // Not exactly same as pointing value to
        value->clear();         // 0/null but works well enough for now
                                // But that doesn't quite work with passing
    return tmp;                 // address of local string as recommended
}
