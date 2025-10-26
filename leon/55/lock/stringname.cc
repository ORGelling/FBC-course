#include "lock.ih"

    // by 

string Lock::stringName(string const &path1, char *(*name)(char *pathPH))
{
    size_t length = path1.length();
    char *pathHandle = new char[length + 1];
    
    for (size_t index = 0; index != length; ++index)
        pathHandle[index] = path1[index];   // No refactoring on purpose
    pathHandle[length] = '\0';              // see info.txt for reason
    
    char *ret = name(pathHandle);           // get ret val
    string result(ret);
    
    delete [] pathHandle;
    return result;
}
