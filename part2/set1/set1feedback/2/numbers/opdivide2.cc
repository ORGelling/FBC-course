#include "numbers.ih"

    // by 

Numbers operator/(Numbers &&lhs, int const rhs)
{
    return std::move(lhs) /= rhs;
}
