#ifndef INCLUDED_COUNTER_
#define INCLUDED_COUNTER_

#include <cstddef>              // for size_t

class Counter
{
    protected:
        static size_t s_count;
        static size_t s_actual;

    public:
        static size_t count();
        static size_t actual();
};
        
#endif
