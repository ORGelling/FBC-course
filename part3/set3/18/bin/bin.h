#ifndef INCLUDED_BIN_
#define INCLUDED_BIN_

#include <cstddef>      // fior size_t

template <size_t number>
struct Bin
{
    enum                        // we recursively call ::value
    {
        value = 10 * Bin<(number >> 1)>::value + (number & 1)
    };
};

template <>                     // and specialise the exit case
struct Bin<0>
{
    enum
    {
        value = 0
    };
};
        
#endif
