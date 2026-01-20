#ifndef INCLUDED_TASKTHREADS_
#define INCLUDED_TASKTHREADS_

#include "../task/task.h"   // also contains isvowel
#include <thread>
#include <cctype>   // for isdigit, isxdigit, and ispunct

class TaskThreads
{
    bool const  d_seq;
    char const *d_filename;         // to output at end of run
    
    Task d_tasks[4] = 
    {
        Task(Task::isvowel, "vowels"),
        Task(std::isdigit, "digits"),
        Task(std::isxdigit, "hexadecimals"),
        Task(std::ispunct, "punctuation characters")
    };
        
    std::thread d_threads[4];
    
    static void (TaskThreads::*s_run[])();
    
    public:
        TaskThreads(char **argv);
        
        void setFile(char const *filename);
        void run();
    private:
        void parallel();
        void sequential();
        
        void show() const;
};

#endif
