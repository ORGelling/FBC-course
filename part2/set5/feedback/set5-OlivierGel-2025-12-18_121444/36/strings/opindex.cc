#include "strings.ih"

    // by 

string &Strings::operator[](size_t idx)
{
    if (!d_data[idx].unique())                          // COW if not unique
        d_data[idx] = make_shared<string>(*d_data[idx]);
    
    return *d_data[idx];
}
/* JB:
 * That's not exactly COW. It's COI, if you will...
 */
