#ifndef INCLUDED_TEMPLATE03_
#define INCLUDED_TEMPLATE03_
#include <iostream>

template <typename To>
To *rawCapacity(size_t size)
{
    return static_cast<To *>(operator new(size * sizeof(To)));
}

#endif
