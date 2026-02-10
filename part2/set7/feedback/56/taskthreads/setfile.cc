#include "taskthreads.ih"

    // by 

void TaskThreads::setFile(char const *filename)
{
    for_each(begin(d_tasks), end(d_tasks),      // set all Task objects 
        [&](Task &tsk)                          // internal streams to
        {                                       // user specified file
            tsk.setFile(filename);
        }
    );
}
