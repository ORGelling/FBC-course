#include "storage.ih"

    // by 

bool Storage::empty() const
{
    lock_guard<mutex> _{ d_qMutex };
    return d_queue.size() == 0;
}

