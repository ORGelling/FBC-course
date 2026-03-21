#ifndef INCLUDED_COMPARE_
#define INCLUDED_COMPARE_

#include "canorder.i"

template <typename LHS, typename RHS> 
    requires CanOrder<LHS, RHS>
void func(LHS const &lhs, RHS const &rhs);

template <typename Type>
    requires CanOrder<Type, Type> 
class Compare;
        
#endif
