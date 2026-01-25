#include "semaphore.ih"

    // by 

void Semaphore::set(size_t nAvailable)
{
    d_nAvailable = nAvailable;          // this member is atomic
    d_condition.notify_all();           // notify waiting threads of change
}
