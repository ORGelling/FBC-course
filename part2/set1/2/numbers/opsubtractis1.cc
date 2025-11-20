#include "numbers.ih"

    // by 

Numbers &&Numbers::operator-=(Numbers const &other) &&
{
    subtract(other);
    return std::move(*this);
}
