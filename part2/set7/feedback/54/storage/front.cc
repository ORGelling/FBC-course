#include "storage.ih"

    // by 
                                                // we return by value to
string Storage::front()                         // prevent dangling refs
{
    lock_guard<mutex> _{ d_qMutex };
    return d_queue.front();                 // no guard for empty queue on 
}                                           // purpose. Up to user/programmer
