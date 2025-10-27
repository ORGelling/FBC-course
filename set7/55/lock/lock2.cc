#include "lock.ih"

    // by 

Lock::Lock(string const &path, string lockDir)
{
    string fullName = lockPath(path, lockDir);
    
    d_filedesc = open(fullName);
    
    cerr << (valid() ? "lock successful\n" : "lock failed\n");
}
