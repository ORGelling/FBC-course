#include "strings.ih"

    // by resize.cc 

void Strings::destroyStrings(size_t const cutoff)
{
    for (size_t index = d_size; index-- != cutoff; )
        delete d_data[index];
    
    setNull(cutoff, d_size);
    d_size = cutoff;
}
