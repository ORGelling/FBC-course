#include "numbers.ih"

    // by 

Numbers operator-(Numbers const &lhs, Numbers const &rhs)
{
//  Numbers tmp(lhs);
//  tmp.subtract(rhs);
//  return tmp;
    
    Numbers copy(lhs);
    return std::move(copy) - rhs;
}                           // can rewrite in terms of rval -=. Avoids friend
