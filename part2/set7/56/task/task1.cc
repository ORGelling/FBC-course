#include "task.ih"

    // by 

Task::Task(Action action, char const *filename)
:
    d_type(action),
    d_file(filename)
{}
