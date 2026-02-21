#ifndef INCLUDED_UNIQUE_
#define INCLUDED_UNIQUE_
#include <memory>

template <typename Type>
class Unique
{
    std::unique_ptr<Type> d_data;
    
    public:
        Unique() = default; 
        Unique(Type const &value);
        Unique(Type *ptr);
        
        Unique(Unique const &other);        // needs manual check
        Unique(Unique &&) = default;        // Default safely swaps ptr
        
        Unique &operator=(Unique const &other);
        Unique &operator=(Unique &&other) = default;
        
        Type &get();
        Type const &get() const;
        
    private:
        //void swap(Unique &other);
};

#include "uniquevc.i"
#include "uniquepc.i"
#include "uniquecc.i"

#include "opassigncopy.i"

#include "get.i"
#include "getconst.i"

//#include "swap.i"

#endif
