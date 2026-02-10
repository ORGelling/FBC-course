#include "taskthreads.ih"

    // by 

void (TaskThreads::*TaskThreads::s_run[])() = 
{
    &TaskThreads::parallel,
    &TaskThreads::sequential
};
