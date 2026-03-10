#ifndef INCLUDED_TRAITS_
#define INCLUDED_TRAITS_

#include <utility>                              // for std::forward

template <typename Type>
struct Traits
{                                               // use enums instead?
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

//  This solution is somewhat gimmicky, especially since it requires the
//  addition of an extra Trait, i.e. that for Type *&. Another solution is to
//  not use these Traits at all and simply have a function with overloads:

template <typename Type>
int const *make_const_ptr(Type &value)
{
    return &value;
}

template <typename Type>
int const *make_const_ptr(Type *value)
{
    return value;
}

// There is probably also a way to still use traits but not have to define an
// extra Type *& Trait. Feedback is welcome once again!

#endif
