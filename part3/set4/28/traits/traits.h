#ifndef INCLUDED_TRAITS_
#define INCLUDED_TRAITS_

#include <utility>                              // for std::forward

template <typename Type>
struct Traits
{
    static constexpr int value = 1;
};

template <typename Type>
struct Traits<Type *>
{
    static constexpr int value = 2;
};

template <typename Type>                        // this is needed to use  
struct Traits<Type *&>                          // perfect forwarding in the 
{                                               // const pointer function
    static constexpr int value = 2;
};

template <typename Type>
struct Traits<Type &>
{
    static constexpr int value = 3;
};

template <typename Type>
struct Traits<Type &&>
{
    static constexpr int value = 4;
};

//:

template <typename Type>
int const *func(Type &&value)
{
    if constexpr (Traits<Type>::value == 2)
        return value;
        //return std::forward<Type>(value);     // not necessary for int *
    else
        return &value;
}

#endif
