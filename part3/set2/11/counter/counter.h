#ifndef INCLUDED_COUNTER_
#define INCLUDED_COUNTER_

#include <cstddef>              // for size_t

class Counter
{
    static size_t s_global_count;
    static size_t s_global_actual;
    
    protected:
        Counter();
        ~Counter();
        
    public:
        static size_t global_count();
        static size_t global_actual();
};
        
#endif
