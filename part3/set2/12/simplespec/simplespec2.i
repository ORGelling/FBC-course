#include "simplespec.ih"

    // by 

template <typename Type>
Simple<Type *>::Simple(Type const &value)
:
    d_value(new Type(value))
{}
