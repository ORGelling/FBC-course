#include "numbers.ih"

    // by operator== in opequal.cc

bool Numbers::compareContents(Numbers const &lhs, Numbers const &rhs)
{
    for (size_t index = 0; index < lhs.d_size; ++index)
    {
        if (lhs[index] != rhs[index])   // using overloaded op[]
            return false;
    }
    return true;
}                       // this one never runs if lhs.d_size != rhs.d_size
