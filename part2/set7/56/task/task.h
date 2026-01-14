#ifndef INCLUDED_TASK_
#define INCLUDED_TASK_

#include <fstream>

enum Action
{
    VOWELS,
    DIGITS,
    HEXADECS,
    PRINTABLES,
};

class Task
{
    static size_t (Task::*s_count[])();
    
    Action const d_type;
    std::ifstream d_file;
    
    public:
        Task(Action action, char const *filename);
        
        size_t operator()();

    private:
        size_t vowels();
        size_t digits();
        size_t hexadecs();
        size_t printables();
};
        
#endif
