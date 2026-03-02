#ifndef INCLUDED_I2C_
#define INCLUDED_I2C_

#include <cstddef>

template <size_t Integer>
class I2C
{
    template <char ...Chars>
    struct Digits
    {
        static constexpr char const s_ntbs[] = 
        {
            Chars...,
            0
        };
    };
    
    template <size_t Remaining, char ...Chars>
    struct Build : Build<Remaining / 10, '0' + (Remaining % 10), Chars...>
    {};
    

    template <size_t Remaining, char ...Chars>
    struch Build<0, Chars...> : Digits<Chars...>
    {};
    
    public:
        static constexpr char const s_ntbs[] = Build<Integer>::s_ntbs;
};

template <>
class I2C<0>
{
    public:
        static constexpr char s_ntbs[] = 
        {
            '0',
            0
        };
};
        
#endif
