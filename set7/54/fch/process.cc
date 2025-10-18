#include "fch.ih"

    // by 

void Fch::process()
{
    d_location = 0;
    
    while (!requestedN() && findTarget())
        (this->*s_action[d_action])();
    
    insertLine();
}
