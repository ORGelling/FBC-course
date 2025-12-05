#include "numbers.ih"

    // by 

Numbers operator*(int const lhs, Numbers rhs)
{
    rhs *= lhs;
    return rhs;
}
