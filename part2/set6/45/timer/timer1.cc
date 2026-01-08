#include "timer.ih"

    // by 

Timer::Timer(ostream &out)
:
    d_out(out),
    d_start(nowMs())
{}
