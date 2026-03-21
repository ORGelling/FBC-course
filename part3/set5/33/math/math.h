#ifndef INCLUDED_MATH_
#define INCLUDED_MATH_

#include "basicmath.i"

template <typename LHS, typename RHS> requires BasicMath<LHS, RHS>
auto math(LHS lhs, RHS rhs)
{
    return lhs + rhs;
}
        
#endif
