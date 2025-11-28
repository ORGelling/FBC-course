#ifndef INCLUDED_PROCESS_
#define INCLUDED_PROCESS_

//#include <arg/arg.h>
#include "../arg/arg.h"

class Process
{
    public:
        Process(Arg const &arg);
        void run();
};

#endif
