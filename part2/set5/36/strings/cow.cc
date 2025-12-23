#include "strings.ih"

    // by 

void Strings::cow(size_t idx)
{
    if (!d_data[idx].unique())                          // cow if not unique
        d_data[idx] = make_shared<string>(*d_data[idx]);
}                                       // otherwise overwrite unique element
