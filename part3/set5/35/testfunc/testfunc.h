#ifndef INCLUDED_TESTFUNC_
#define INCLUDED_TESTFUNC_

#include "hasopderef.i"

                                                // functions:
template <HasOpDeref Type>
void useDeref(Type const &tp)
{}

template <typename Type> requires HasOpDeref<Type>
void useDeref2(Type const &tp)
{}

                                                // classes:
template <HasOpDeref Type>
class TestClass1
{
    Type d_ptr;
    
    public:
        TestClass1(Type type)
        :
            d_ptr(type)
        {};
};

template <typename Type> requires HasOpDeref<Type>
class TestClass2
{
    Type d_ptr;

    public:
        TestClass2(Type type)
        :
            d_ptr(type)
        {};
};
        
#endif
