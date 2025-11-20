#include "lock.ih"

    // by 

string Lock::lockPath(string const &path, string const &lockDir)
{
    string baseName = stringName(path, basename); 
    
    return lockDir + "/" + baseName + ".lck";
}
