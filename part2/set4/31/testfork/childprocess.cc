#include "testfork.ih"

    // by 

void TestFork::childProcess()
{
    cerr << "Hello from child " << ++s_processCount 
        << " with PID: " << getpid() << '\n';
    
    if (s_processCount != 5)
        fork();
}
