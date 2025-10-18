#include "fch.ih"

    // by main.cc 

Fch::Fch(char const *fname)
{
    if (openInput(fname))
        searchReplace();
}
