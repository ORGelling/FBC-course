#include "numbers.ih"

    // by 

bool Numbers::divisionValid(int const rhs)
{
    if (rhs == 0)               // explicitly for clarity of intent
    {
        cerr << "invalid divisor\n";
        return false;
    }
    return true;
}
