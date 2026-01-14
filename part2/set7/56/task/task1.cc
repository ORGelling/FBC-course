#include "task.ih"

    // by 

Task::Task(bool (*funptr)(int), char const *filename)
:
    d_pred(funptr),
    d_type(action),
{}
