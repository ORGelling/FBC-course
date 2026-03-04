#ifndef INCLUDED_UNIQUE_
#define INCLUDED_UNIQUE_

#include "../counter/counter.h"
#include <memory>

template <typename Type>
class Unique: public Counter
{
    std::unique_ptr<Type> d_data;
    
    public:
        Unique() = default; 
        Unique(Type &&value);               // fixed inefficient copy
        Unique(Type *ptr);
        
        Unique(Unique const &other);        // needs manual check
        Unique(Unique &&other);             // 
};

//:

#include "uniquevc.i"
#include "uniquepc.i"
#include "uniquecc.i"
#include "uniquemc.i"

#endif
