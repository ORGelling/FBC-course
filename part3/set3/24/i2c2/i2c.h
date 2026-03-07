#ifndef INCLUDED_I2C_
#define INCLUDED_I2C_

#include <cstddef>


template <char ...Chars>    //    3:    // at the end of the recursion we
struct Digits                           // inherit this to turn our char 
{                                       // parameter pack into an ntbs
    static constexpr char const s_ntbs[] = 
    {
        Chars...,
        0
    };
};


template <size_t Integer, char ...chars>
struct I2C : I2C<Integer / 10, '0' + (Integer % 10), chars...>
{};                         //    1:    // Inheriting recursively to pass a
                                        // digit to the param pack each turn

template <char ...chars>
struct I2C<0, chars...> : Digits<chars...>
{};                         //    2:    // When no digits left we inherit the
                                        // conversion struct and get our ntbs

template <>
struct I2C<0>                    // Overload for 0-case, which fails otherwise
{
    public:
        static constexpr char s_ntbs[] = 
        {
            '0',
            0
        };
};
        
#endif
