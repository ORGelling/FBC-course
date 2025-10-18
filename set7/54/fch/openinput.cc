#include "fch.ih"

    // by fch1.cc

bool Fch::openInput(char const *fname)
{
    d_input.open(fname, ios::in);
    return d_input.is_open();
}
