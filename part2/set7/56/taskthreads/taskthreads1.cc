#include "taskthreads.ih"

    // by 

TaskThreads::TaskThreads(int argc, char **argv)
:                                   // exception guarding? Can do in main.
    d_file(argv[1]),
    d_seq(argv[2])                  // should convert to bool
{}

// argv[1] file to process
// if argv[2]: sequential, no argv[2]: parallel
