#ifndef INCLUDED_TASK_
#define INCLUDED_TASK_

#include <fstream>

class Task
{
    int (*d_pred)(int);
    char const *d_action;
    std::ifstream d_file;
    
    size_t d_count;
    
    public:
        Task(int (*funptr)(int), char const *action);
        
        void setFile(char const *filename);
        void operator()();
        
        size_t count() const;
        char const *type() const;

        static int isvowel(int const ch);       // placing this here
};                                              // for convenience, not 
                                                // the cleanest though
inline size_t Task::count() const
{
    return d_count;
}

inline char const *Task::type() const
{
    return d_action;
}

#endif
