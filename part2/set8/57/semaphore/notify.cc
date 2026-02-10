#include "semaphore.ih"

    // by 

void Semaphore::notify()
{
    lock_guard<mutex> lk(d_mutex);      // no unique lock needed here
    if (d_nAvailable++ == 0)
        d_condition.notify_one();
}
