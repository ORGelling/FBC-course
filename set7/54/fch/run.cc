#include "fch.ih"

    // by main.cc 

int Fch::run()
{
    if (!d_input.is_open())             // verify input
        return 1;
    
    while(getline(d_input, d_line))     // get line and execute changes
        process();
    
    return 0;
}
