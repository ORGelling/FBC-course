#include "strings.ih"

    // by 

string &Strings::at(size_t idx)
{
    if (!d_data.at(idx).unique())              // COW if not unique
        d_data[idx] = make_shared<string>(*d_data[idx]);
                                                // first at checks bounds,
    return *d_data[idx];                        // rest can simply use op[]
}
