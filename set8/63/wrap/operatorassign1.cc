#include "wrap.ih"

    // by 

Wrap &Wrap::operator=(Wrap const &other)
{
    Wrap tmp{ other };
    swap(tmp);
    return *this;
}
