#include "taskthreads.ih"

    // by 

void TaskThreads::parallel()
{
    for (size_t idx = 0; idx != 4; ++idx)               // we run the threads
        d_threads[idx] = thread{ ref(d_tasks[idx]) };   // in parallel

    for (size_t idx = 0; idx != 4; ++idx)
        d_threads[idx].join();
    //JB: With no code here, I'd use jthreads.
}
