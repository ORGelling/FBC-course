#include "taskthreads.ih"

    // by 

void TaskThreads::run()
{
    (this->*s_run[d_seq])();                // use array of func ptrs
                                            // with d_seq = false for 0
    show();
}
