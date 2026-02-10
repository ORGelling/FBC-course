#include "resultsqueue.ih"

    // by 

bool ResultsQueue::empty() const
{
    lock_guard _{ d_mutex };
    return d_queue.size() == 0;
}
