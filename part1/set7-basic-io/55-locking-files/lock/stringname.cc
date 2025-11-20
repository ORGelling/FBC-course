#include "lock.ih"

    // by lock1.cc lockpath.cc

string Lock::stringName(string const &path, char *(*name)(char *pathPH))
{
    char fileName[path.length() + 1];
    
    fileName[ path.copy(fileName, string::npos) ] = 0;
    
    return name(fileName);
}
