#ifndef INCLUDED_CONVERT_
#define INCLUDED_CONVERT_

#include "../display/display.h"

template <size_t value, size_t radix>
struct Convert
{
    using CP = Display<value, radix>::CP;
};
        
#endif
