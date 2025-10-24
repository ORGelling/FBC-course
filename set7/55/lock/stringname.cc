#include "lock.ih"

    // by lock1.cc lockpath.cc

string Lock::stringName(string const &path1, char *(*name)(char *pathPH))
{
    //size_t length = path1.length();
    char fileName[path1.length() + 1];
    
    strcpy(fileName, path1.c_str());
    //for (size_t index = 0; index != length; ++index)
    //    pathHandle[index] = path1[index];   // No refactoring on purpose
    //pathHandle[length] = '\0';              // see info.txt for reason
    
    return string(name(fileName));
}
