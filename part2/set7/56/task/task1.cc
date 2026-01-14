#include "task.ih"

    // by 

Task::Task(int (*funptr)(int), char const *action)
:
    d_pred(funptr),
    d_action(action),
    d_count(0)
{}
