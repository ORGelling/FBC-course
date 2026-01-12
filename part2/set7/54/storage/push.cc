#include "storage.ih"

    // by 

void Storage::push(string line)
{
    lock_guard<mutex> _{ d_qMutex };
    d_queue.push(move(line));
}
