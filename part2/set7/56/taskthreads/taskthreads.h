#ifndef INCLUDED_TASKTHREADS_
#define INCLUDED_TASKTHREADS_

#include "../task/task.h"
#include <thread>
#include <cctype>   // for isdigit, isxdigit, and ispunct

class TaskThreads
{
    bool const  d_seq;
    
    Task d_tasks[4] = 
    {
        Task(Task::isvowel, "vowels"),        // might not need this
        Task(std::isdigit, "digits"),        // inheritance at all
        Task(std::isxdigit, "hexadecimals"),
        Task(std::ispunct, "printables")
    };
        
    std::thread  d_threads[4];
    
    static void (TaskThreads::*s_run()[])();
    
    public:
        TaskThreads(char **argv);
        
        void setFile(char const *filename);
        void run();
    private:
        void parallel();
        void sequential();
};
        
#endif
