#include "lock.ih"

    // by lock2.cc

int Lock::open(string pathStr)
{
    filesystem::path pathObj(pathStr);      // for exists()
    char const *pathC = pathStr.c_str();    // for open()
    int filedesc;                           // temp storage of d_filedesc
    
    filedesc = (filesystem::exists(pathObj) ? ::open(pathC, O_RDWR) 
                        : ::open(pathC, O_CREAT | O_TRUNC | O_RDWR, 0600));
    
    return filedesc;
}
