#include "compilequeue.ih"

    // by 

bool CompileQueue::done() const
{
    lock_guard<mutex> _{ d_mutex };
    return d_finished && d_queue.empty();
}
