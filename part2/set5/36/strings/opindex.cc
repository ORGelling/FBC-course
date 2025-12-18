#include "strings.ih"

    // by 

string &Strings::operator[](size_t idx)
{
    if (!d_data[idx].unique())                          // NOT proper COW
        d_data[idx] = make_shared<string>(*d_data[idx]);
    
    return *d_data[idx];
}
