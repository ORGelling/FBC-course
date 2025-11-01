#include "strings.ih"

string *Strings::enlargeByMove()
{
    string *ret = new string[d_size + 1];       // room for an extra string
    
    for (size_t idx = 0; idx != d_size; ++idx)  // move existing strings
        ret[idx] = move(d_str[idx]);
    
    return ret;
}
