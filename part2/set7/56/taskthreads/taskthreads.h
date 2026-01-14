#ifndef INCLUDED_TASKTHREADS_
#define INCLUDED_TASKTHREADS_

#include "../task/task.h"
#include <thread>

class FileName
{
    protected:
        char const *b_filename;
    
    public:
        FileName(char const *filename);
        char const *getFileName() const;
};

class TaskThreads : private FileName
{
    char const *d_file;
    bool const  d_seq;
    
    Task d_tasks[4] = 
    {
        Task(Action::VOWELS, getFileName()),        // might not need this
        Task(Action::DIGITS, getFileName()),        // inheritance at all
        Task(Action::HEXADECS, getFileName()),
        Task(Action::PRINTABLES, getFileName())
    };
        
    std::thread  d_threads[4];
    
    static void (TaskThreads::*s_run()[])();
    
    public:
        TaskThreads(char **argv);
        
        void run();
    private:
        void parallel();
        void sequential();
};
        
#endif
