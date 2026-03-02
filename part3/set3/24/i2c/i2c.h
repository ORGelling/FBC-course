#ifndef INCLUDED_I2C_
#define INCLUDED_I2C_

#include <cstddef>

template <size_t Integer>
class I2C
{
    template <char ...Chars>    //    3:    // at the end of the recursion we
    struct Digits                           // inherit this to turn our char 
    {                                       // parameter pack into an ntbs
        static constexpr char const s_ntbs[] = 
        {
            Chars...,
            0
        };
    };
                                //    2:    // We self-inherit to bite
                                            // off a digit each step
    template <size_t Remaining, char ...Chars>
    struct Build : Build<Remaining / 10, '0' + (Remaining % 10), Chars...>
    {};             //   ^^^^^^^^^^^^^^  ^^^^^^^^^^^^^^^^^^^^^^  ^^^^^^^^
                    //    removes the    //  returns only the  //  converted
                    //  rightmost digit  //   rightmost digit  //  characters
    
                                // this takes the rightmost digit of Integer,
                                // converts it to a char using '0' + value,
                                // *pre*pends it to Chars parameter pack,
                                // which recursively inherits the other digits
    
    template <char ...Chars>
    struct Build<0, Chars...> : Digits<Chars...>
    {};
    
    public:                     //    1:    // starts inheritance chain
        static constexpr char const *s_ntbs = Build<Integer>::s_ntbs;
};                              //  ^  pointer since size unknown initially

template <>
class I2C<0>                    // Overload for 0-case, which fails otherwise
{
    public:
        static constexpr char s_ntbs[] = 
        {
            '0',
            0
        };
};
        
#endif
