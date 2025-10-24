#include "demo.ih"

    // by 

Demo &Demo::operator=(Demo &&tmp)
{
    swap(tmp);
    return *this;
}
