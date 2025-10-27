#include "fch.ih"

    // by 

void Fch::process()
{
    d_location = 0;                 // start reading at start of line
                                                // unless N commnd, find text
    while (!requestedN() && findTarget())       // to change
        (this->*s_action[d_action])();          // executes action
    
    insertLine();
}
