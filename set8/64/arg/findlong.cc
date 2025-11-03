#include "arg.ih"

    // by 

void Arg::findLong
(
    struct option *options, 
    size_t const nLongOpts,
    int opt
)
{
    for (size_t index = 0; index != nLongOpts; ++index)
    {
        if (options[index].val == opt)  
            d_longOption.add(options[index].name);
    }                       // Looping through short complements of long opt
}
