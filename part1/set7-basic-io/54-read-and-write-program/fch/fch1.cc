#include "fch.ih"

    // by main.cc 

Fch::Fch(char const *fname)
{
    if (openInput(fname))           // open file and ask for target
        searchReplace();            // and replacement text
}
