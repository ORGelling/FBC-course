#include "numbers.ih"

    // by 

Numbers &Numbers::operator*=(int const other) &
{
    multiplyContents(other);
    return *this;
}
