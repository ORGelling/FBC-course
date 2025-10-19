#include "lock.ih"

    // by 

Lock::Lock(string const &path, string lockDir)
{
    string fullName = lockPath(path, lockDir);
    
    filesystem::path pathObj(fullName);
    
    d_filedesc = open(pathObj);
    
    if(valid())
        cerr << "locking successful\n";
    else
        cerr << "locking failed\n";
}
