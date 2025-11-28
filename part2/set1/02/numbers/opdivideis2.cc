#include "numbers.ih"

    // by 

Numbers &Numbers::operator/=(int const other) &
{
    if (divisionValid(other))
        divideContents(other);
    
    return *this;
}
