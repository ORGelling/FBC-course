#include "resultsqueue.ih"

    // by 

optional<Result> ResultsQueue::popFront()
{
    lock_guard<mutex> _{ d_mutex };
    
    optional<Result> opt;
    
    if (not d_queue.empty())
    {
        opt = move(d_queue.front());
        d_queue.pop();
    }
    
    return opt;                         // Doing this just like before, 
}                                       // using optional rather than RBA 
                                        // and returning a bool to confirm
