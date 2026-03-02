#ifndef INCLUDED_CONVERT_
#define INCLUDED_CONVERT_

#include "../display/display.h"

template <size_t Value, size_t Radix>
struct Convert
{
    using CP = Display<Value, Radix>::CP;
};
        
#endif
