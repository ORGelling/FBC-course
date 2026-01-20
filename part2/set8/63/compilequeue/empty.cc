#include "compilequeue.ih"

    // by 

bool CompileQueue::empty()
{
    lock_guard _{ d_mutex };
    return d_queue.size() == 0;
}
