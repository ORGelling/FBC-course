#include "timer.ih"

    // by 

Timer::~Timer()
{
    size_t elapsed = nowMs() - d_start;
    d_out << "used time:\n" << setw(15) << elapsed << " ms.\n";
}
