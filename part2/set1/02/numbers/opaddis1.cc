#include "numbers.ih"

    // by 

Numbers &&Numbers::operator+=(Numbers const &other) &&
{
    add(other);
    return std::move(*this);
}
