#include "fch.h"

bool Fch::openInput(char const *fname)
{
    d_input.open(fname);
    return d_input.is_open();
    
}
