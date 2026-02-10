#include "compilequeue.ih"

    // by 

void CompileQueue::setFinished()
{
    lock_guard<mutex> _{ d_mutex };
    d_finished = true;
}
