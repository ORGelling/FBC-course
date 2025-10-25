#include "demo.ih"

    // by 

Demo &Demo::operator=(Demo &&tmp)
{
    cerr << "executing move assignment.\n";
    return *this;
}
