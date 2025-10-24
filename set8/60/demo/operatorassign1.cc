#include "demo.ih"

    // by 

Demo &Demo::operator=(Demo const &other)
{
    Demo tmp(other);
    swap(tmp);
    return *this;
}
