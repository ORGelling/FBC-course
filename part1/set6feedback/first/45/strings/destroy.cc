#include "strings.ih"

    // by strings5.cc

void Strings::destroy()
{
    for (size_t index = 0; index != d_size; ++index)
        d_data[index].~string();
    
    operator delete(d_data);
}
