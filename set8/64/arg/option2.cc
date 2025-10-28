#include "arg.ih"

    // by 

size_t Arg::option(string const &options) const
{
    size_t count = 0;
    for (size_t index = 0; index != options.size(); ++index)
        count += option(options[index]);
    return count;
}
