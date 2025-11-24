#include "strings.ih"

    // by 

Strings::~Strings()
{
    for (size_t index = 0; index != d_size; ++index)
        delete d_str[index];
    
    operator delete(d_str);
}
