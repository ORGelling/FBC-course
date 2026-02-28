#ifndef INCLUDED_SIMPLE_
#define INCLUDED_SIMPLE_

template <typename Type>
class Simple
{
    Type d_value = Type{};

    public:
        Simple() = default;
        Simple(Type const &value);

        Type &get();
};

#include "simple1.i"
#include "get.i"

#endif
