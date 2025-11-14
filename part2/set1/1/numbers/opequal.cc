#include "numbers.ih"

    // by 

bool operator==(Numbers const &lhs, Numbers const rhs)
{
    return compareSize(lhs, rhs) and compareContents(lhs, rhs);
}                                       // scope selected by Koenig lookup
