#include "compilequeue.ih"

    // by 

void CompileQueue::push(CompileTask task)
{
    lock_guard<mutex> _{ d_mutex };
    d_queue.push(move(task));
}
