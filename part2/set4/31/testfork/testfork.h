#ifndef INCLUDED_TESTFORK_
#define INCLUDED_TESTFORK_

#include "../fork/fork.h"
//#include <iosfwd>

class TestFork: public Fork
{
    inline static size_t s_processCount = 0;
    
    public:
        TestFork() = default;
        ~TestFork() override = default;

    private:
        void parentProcess() override;
        void childProcess() override;
};
        
#endif
