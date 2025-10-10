#include "strings.ih"

void Strings::resize(size_t newSize)
{
    if (newSize < d_size)
        destroyPart(newSize);
    else if (newSize > d_size)
        reserve(newSize);
}
