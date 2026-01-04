#include "timer.ih"

    // by 

size_t Timer::nowMs()
{
    using namespace chrono;
    return steady_clock::now().time_since_epoch().count() / 1'000'000;
}
//                              // another solution using a chrono algorithm
//  return duration_cast<milliseconds>(
//      steady_clock::now().time_since_epoch()
//  ).count();                  
