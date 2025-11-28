#include "numbers.ih"

    // by 

Numbers operator/(Numbers const &lhs, int const rhs)
{
    //lhs /= rhs;
    //return lhs;

    Numbers tmp(lhs);
    return std::move(tmp) / rhs;
}
