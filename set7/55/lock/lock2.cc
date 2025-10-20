#include "lock.ih"

    // by 

Lock::Lock(string const &path, string lockDir)
{
    string fullName = lockPath(path, lockDir);
    cerr << fullName << '\n';
    filesystem::path pathObj(fullName);
    
    d_filedesc = open(pathObj);
    
    if(valid())
        cerr << "lock successful\n";
    else
        cerr << "lock failed\n";
}
