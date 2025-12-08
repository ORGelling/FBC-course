#include "testfork.ih"

    // by 

void TestFork::parentProcess()
{
    waitForChild();
    cerr << "Spawning new child process: " << pid() << '\n';
}
