#ifndef INCLUDED_KILLER_
#define INCLUDED_KILLER_
#include "../fork/fork.h"
#include "../../57/semaphore/semaphore.h"

class Killer: public Fork
{
    char const *d_path;
    char const *d_nLines;
    size_t      d_duration;
    
    Semaphore   d_semaphore;
    
    public:
        Killer(char **argv);
        
    private:
        void parentProcess() override;
        void childProcess() override;
};

#endif
