#include "storage.ih"

    // by 

bool Storage::done() const
{
    lock_guard<mutex> _{ d_qMutex };
    return d_finished && d_queue.empty();
}

