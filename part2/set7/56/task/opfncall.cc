#include "task.ih"

    // by 

size_t Task::operator()()
{
    return count_if(d_file.begin(), d_file.end(), 
        [&]()
        {
            
        }
    );
}
