#include "testfork.ih"

    // by 

void TestFork::childProcess()
{
    cerr << "Hello from child " << s_processCount 
        << " PID: " << getpid() << '\n';
    
  //if (s_processCount++ != 15)
    //  fork();
}
