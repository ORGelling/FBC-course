#include "fork.ih"

    // by 

void Fork::fork()
{
    d_pid = ::fork();
    
    switch (d_pid)
    {
        case -1:
            throw runtime_error{"Failed to create child"};
        break;
        case 0:
            childProcess();
            _exit(0);           // exit status is simply 0 for now
        break;
        default:
            parentProcess();
        break;
    }
}
