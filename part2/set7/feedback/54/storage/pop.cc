#include "storage.ih"

    // by 

void Storage::pop() 
{
    lock_guard<mutex> _{ d_qMutex };
    d_queue.pop();                          // no guard for empty queue on 
}                                           // purpose. Up to user/programmer
