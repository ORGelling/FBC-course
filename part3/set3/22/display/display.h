#ifndef INCLUDED_DISPLAY_
#define INCLUDED_DISPLAY_

#include "../../20/merge/merge.h"
#include <cstddef>

template <size_t Value, size_t Radix, bool Displayed = false>
struct Display
{                                           // put in global ANS!!!!!!!!!!!!
    static constexpr const char DIGITS[] = 
                                    "0123456789abcdefghijklmnopqrstuvwxyz";
    
    using CP =  Merge<
                    typename Display<Value / Radix, Radix, true>::CP,
                    OneChar<DIGITS[Value % Radix]>
                >::CP;
};

template <size_t Radix>
struct Display<0, Radix, true>
{
    using CP = Chars<>;
};

template <size_t Radix>
struct Display<0, Radix, false>
{
    using CP = Chars<'0'>;
};
        
#endif
