#include "resultsqueue.ih"

    // by 

void ResultsQueue::push(shared_future<Result> result)
{
    lock_guard<mutex> _{ d_mutex };
    d_queue.push(move(result));
}
