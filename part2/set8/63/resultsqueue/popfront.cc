#include "resultsqueue.ih"

    // by 

optional<shared_future<Result>> ResultsQueue::popFront()
{
    lock_guard<mutex> _{ d_mutex };
    
    optional<shared_future<Result>> opt;
    
    if (not d_queue.empty())
    {
        opt = move(d_queue.front());
        d_queue.pop();
    }
    
    return opt;                         // This function and this class as a
}                                       // whole are a tad overdone, but wra-
                                        // pping the Result queue in a small
                                        // class does help nicely encapsulate
                                        // further! Giving MultiCompile a
                                        // mutex for this queue would be meh
