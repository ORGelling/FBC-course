#include "process.ih"

void Process::run()
{
    cout << "running\n";
    throw runtime_error{"unexpected exception encountered"};
}
