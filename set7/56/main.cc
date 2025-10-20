#include "main.ih"

int main(int argc, char *argv[])
{
    fstream procAcc("/var/log/account/pacct", ios::in);
    
    if (!procAcc.is_open())
        return 1;
    
    // if -a flag output all processes
    
    string line;
    while (getline(procAcc, line))
    {
        // if error code is nonzero output process name
        
        // if killed with SIGKILL or SIGTERM mention signal name iso number
    }
}
