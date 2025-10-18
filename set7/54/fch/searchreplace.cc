#include "fch.ih"

    // by fch1.cc

void Fch::searchReplace()
{
    (this->*s_action[d_action])();
}
