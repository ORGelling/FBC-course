#ifndef INCLUDED_TASK_
#define INCLUDED_TASK_

#include <fstream>

class Task
{
    bool (*d_pred)(int);
    char const *d_action;
    std::ifstream d_file;
    
    public:
        Task(bool (*funptr)(int), char const *action);
        
        void setFile(char const *filename);
        size_t operator()();

        static size_t isvowel();
};
        
#endif
