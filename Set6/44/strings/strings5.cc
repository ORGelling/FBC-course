#include "strings.ih"

Strings::~Strings()
{
    for (size_t index = 0; index != d_capacity; ++index)
        delete d_data[index];
        
    operator delete(d_data);
}
