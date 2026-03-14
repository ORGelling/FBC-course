#ifndef INCLUDED_DISPLAY_
#define INCLUDED_DISPLAY_

#include "../../20/merge/merge.h"
#include <cstddef>

template <size_t value, size_t radix, bool displayed = false>
struct Display
{
    using CP =  Merge<
                    typename Display<value / radix, radix, true>::CP,
                    OneChar< (value % radix < 10
                        ? '0' + value % radix
                        : 'a' + value % radix - 10)
                    >
                >::CP;
};

template <size_t radix>
struct Display<0, radix, true>
{
    using CP = Chars<>;
};

template <size_t radix>
struct Display<0, radix, false>
{
    using CP = Chars<'0'>;
};
        
#endif
