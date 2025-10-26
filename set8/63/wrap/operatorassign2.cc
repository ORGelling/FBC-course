#include "wrap.ih"

    // by 

Wrap &Wrap::operator=(Wrap &&tmp)
{
    swap(tmp);
    return *this;
}
