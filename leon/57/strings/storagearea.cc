#include "strings.ih"


void Strings::storageArea()
{
    if (d_size + 1 < d_capacity)        // enough room?
        return;                         // return the current memory block

    d_capacity <<= 1;                   // double the capacity
    enlarge();                          // enlarge the space
}
