#include "lock.ih"

    // by 

string Lock::lockPath(string const &path, string const &lockDir)
{
    string baseName = stringName(path, basename); 
    string fullName = lockDir + "/" + baseName + ".lck";
    
    return fullName;
}
