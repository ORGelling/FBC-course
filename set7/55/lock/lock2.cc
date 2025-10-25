#include "lock.ih"

    // by 

Lock::Lock(string const &path, string lockDir)
{
    string fullName = lockPath(path, lockDir);
    //cerr << fullName << '\n';
    
    d_filedesc = open(fullName);
    
    if(valid())
        cerr << "lock successful\n";
    else
        cerr << "lock failed\n";
}
