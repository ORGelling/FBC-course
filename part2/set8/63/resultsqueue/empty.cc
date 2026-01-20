#include "resultsqueue.ih"

    // by 

bool ResultsQueue::empty()
{
    lock_guard _{ d_mutex };
    return d_queue.size() == 0;
}
