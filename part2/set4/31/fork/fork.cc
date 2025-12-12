#include "fork.ih"

    // by 

void Fork::fork()
{
    d_pid = ::fork();
    
    switch (d_pid)
    {
        case -1:
            throw runtime_error{"Fork falied"};
        break;
        case 0:
            childProcess();     // Might want to catch exceptions?
            _exit(0);           // kill possible zombie
        break;
        default:
            parentProcess();
        break;
    }
}
