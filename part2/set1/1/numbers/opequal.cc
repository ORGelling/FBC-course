#include "numbers.ih"

    // by 

bool operator==(Numbers const &lhs, Numbers const &rhs)
{
    return Numbers::compareSize(lhs, rhs) 
                                and Numbers::compareContents(lhs, rhs);
}                                       // scope selected by Koenig lookup
