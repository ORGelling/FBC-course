#include "testfork.ih"

    // by 

void TestFork::parentProcess()
{
    cerr << "Process " << getpid() << " spawned child " << pid() << '\n';
    waitForChild();
    cerr << "Parent " << getpid() << " is done waiting\n";
}
