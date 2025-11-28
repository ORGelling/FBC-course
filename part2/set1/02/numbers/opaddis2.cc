#include "numbers.ih"

    // by 

Numbers &Numbers::operator+=(Numbers const &other) &
{
    Numbers tmp(*this);
    return *this = std::move(tmp) += other;
}
