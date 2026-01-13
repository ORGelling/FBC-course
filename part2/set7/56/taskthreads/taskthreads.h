#ifndef INCLUDED_TASKTHREADS_
#define INCLUDED_TASKTHREADS_

#include "../task/task.h"
#include <string>
#include <thread>

class TaskThreads
{
    std::string const d_file;
    bool const        d_seq;
    
    Task d_tasks[4] = 
    {
        Task(Task::Action::VOWELS),
        Task(Task::Action::DIGITS),
        Task(Task::Action::HEXADECS),
        Task(Task::Action::PRINTABLES)
    };
        
    thread  d_threads[4];
    
    static void (TaskThreads::*s_run()[])();
    
    public:
        TaskThreads(int argc, char **argv);
        
        void run();
    private:
        void parallel();
        void sequential();
};
        
#endif
