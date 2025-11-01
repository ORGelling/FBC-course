#include "strings.ih"

void Strings::resize(size_t newSize)
{
    if (newSize < d_size)
        destroyStrings(newSize);
    else if (newSize > d_size)
    {
        reserve(newSize);
        initialiseStrings(newSize);
    }
}
