#ifndef INCLUDED_TASK_
#define INCLUDED_TASK_


class Task
{
    enum Action
    {
        VOWELS,
        DIGITS,
        HEXADECS,
        PRINTABLES,
    };
    
    static size_t (Task::*s_count[])();
    
    Action const d_type;
    
    public:
        Task(Action action);
        
        size_t operator()();

    private:
        size_t vowels();
        size_t digits();
        size_t hexadecs();
        size_t printables();
};
        
#endif
