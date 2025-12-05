#include "numbers.ih"

    // by 

Numbers operator*(Numbers lhs, int const rhs)
{
    lhs *= rhs;
    return lhs;
}
