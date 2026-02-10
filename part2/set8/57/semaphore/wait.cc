#include "semaphore.ih"

    // by 

void Semaphore::wait()
{
    unique_lock<mutex> lk(d_mutex);     // acquire lock
    while (d_nAvailable == 0)
        d_condition.wait(lk);           // releases the lock until exit
    
    --d_nAvailable;                     // This is exactly as per the 
}                                       // annotations chapter 20.4 p673
