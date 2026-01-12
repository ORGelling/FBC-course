#include "storage.ih"

    // by 
                                                // we return by value to
void Storage::pop()                             // prevent dangling refs
{
    lock_guard<mutex> _{ d_qMutex };
    d_queue.pop();                          // no guard for empty queue on 
}                                           // purpose. Up to user/programmer
