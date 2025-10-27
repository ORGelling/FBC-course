#include "lock.ih"

    // by lock1.cc lockpath.cc

string Lock::stringName(string const &path1, char *(*name)(char *pathPH))
{
    char fileName[path1.length() + 1];
    
    strcpy(fileName, path1.c_str());
   
    return string(name(fileName));
}
