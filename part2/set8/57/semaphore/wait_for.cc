#include "semaphore.ih"

    // by 

bool Semaphore::wait_for(size_t duration)
{
    unique_lock<mutex> lk(d_mutex);     // acquire lock
    
    time_point<steady_clock> const deadline = 
                                    steady_clock::now() + seconds(duration);
                                            // this deadline and wait_until 
                                            // should keep spurious wakeups 
                                            // from resetting the timer
    while (d_nAvailable == 0)
    {
        if (d_condition.wait_until(lk, deadline) == cv_status::timeout)
            return false;               // false when timeout before done
    }
    --d_nAvailable;
    return true;                        // true if timeout interrupted
}
