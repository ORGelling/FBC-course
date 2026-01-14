#include "taskthreads.ih"

    // by 

void TaskThreads::sequential()
{
    for (size_t idx = 0; idx != 4; ++idx)               // all Task objects
        d_tasks[idx]();                                 // run one by one
}
