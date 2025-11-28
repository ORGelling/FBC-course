#include "numbers.ih"

    // by 

bool operator!=(Numbers const &lhs, Numbers const &rhs) 
{
    return not (lhs == rhs);
}
