#include "fch.ih"

    // by main.cc 

int Fch::run()
{
    if (!d_input.is_open())
        return 1;
    
    while(getline(d_input, d_line))
        process();
    
    return 0;
}
