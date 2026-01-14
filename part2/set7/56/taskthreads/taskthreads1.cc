#include "taskthreads.ih"

    // by 

TaskThreads::TaskThreads(char **argv)
:                                   // exception guarding? Can do in main.
    d_seq(argv[2])                  // should convert to bool
{
    setFile(argv[1]);
}
