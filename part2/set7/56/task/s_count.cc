#include "task.ih"

    // by 

size_t (Task::*Task::s_count[])() = 
{
    &Task::vowels,
    &Task::digits,
    &Task::hexadecs,
    &Task::printables
};
