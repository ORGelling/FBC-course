#include "task.ih"

    // by 

size_t Task::operator()()
{
    return (this->*s_count[d_type])();
}
