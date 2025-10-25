#include "demo.ih"

    // by 

Demo &Demo::operator=(Demo const &other)
{
    cerr << "executing copy assignment.\n";
    return *this;
}
