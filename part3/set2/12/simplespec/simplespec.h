#ifndef INCLUDED_SIMPLESPEC_
#define INCLUDED_SIMPLESPEC_

#include "../simple/simple.h"

template <typename Type>
class Simple<Type *>
{
    Type *d_value = 0;
    
    public:
        Simple() = default;
        Simple(Type *value);
        Simple(Type const &value);
        
        ~Simple();
        
        Type &get();
};

#include "simplespec1.i"
#include "simplespec2.i"
#include "specdtor.i"
#include "specget.i"

#endif
