#ifndef INCLUDED_UNIQUE_
#define INCLUDED_UNIQUE_

#include "../counter/counter.h"
#include <memory>

template <typename Type>
class Unique: public Counter
{
    std::unique_ptr<Type> d_data;
    
    public:
        Unique(); 
        Unique(Type const &value);
        Unique(Type *ptr);
        
        Unique(Unique const &other);        // needs manual check
        Unique(Unique &&);                  // 
        
        ~Unique();                          // decrements s_actual
};

//:

#include "uniquedc.i"
#include "uniquevc.i"
#include "uniquepc.i"
#include "uniquecc.i"
#include "uniquemc.i"

#include "destructor.i"

#endif
