#include "numbers.ih"

    // by 

Numbers operator+(Numbers &&lhs, Numbers const &rhs)
{
//  Numbers tmp(std::move(lhs));
//  tmp.add(rhs);
//  return tmp;

    return std::move(lhs) += rhs;
}                       // can write in terms of +=1. Then no friend needed
