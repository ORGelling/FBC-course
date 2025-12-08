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
            // call exit on child
            exit(0);
        break;
        default:
            parentProcess();
        break;
    }
}
