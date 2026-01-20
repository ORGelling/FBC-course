#include "storage.ih"

    // by 

void Storage::setFinished()
{
    lock_guard<mutex> _{ d_qMutex };
    d_finished = true;
}
