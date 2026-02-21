#ifndef INCLUDED_UNIQUE_
#define INCLUDED_UNIQUE_
#include <memory>

template <typename Type>
class Unique
{
    std::unique_ptr<Type> d_data;
    
    static size_t s_count;
    static size_t s_actual;
    
    public:
        Unique(); 
        Unique(Type const &value);
        Unique(Type *ptr);
        
        Unique(Unique const &other);        // needs manual check
        Unique(Unique &&);                  // 
        
        ~Unique();                          // decrements s_actual
        
        static size_t count();
        static size_t actual();
        
    private:
        //void swap(Unique &other);
};

template <typename Type>
size_t Unique<Type>::s_count = 0;

template <typename Type>
size_t Unique<Type>::s_actual = 0;

//:

#include "uniquedc.i"
#include "uniquevc.i"
#include "uniquepc.i"
#include "uniquecc.i"
#include "uniquemc.i"

#include "destructor.i"

#include "count.i"
#include "actual.i"

//#include "swap.i"

#endif
