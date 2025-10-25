#include "lock.ih"

    // by lock2.cc

int Lock::open(string pathStr)
{
    filesystem::path pathObj(pathStr);      // for exists()
    char const *pathC = pathStr.c_str();    // for open()
    int filedesc;                           // temp storage of d_filedesc
    
    if (filesystem::exists(pathObj))        // Verify .lck file
        filedesc = ::open(pathC, O_RDWR);
    else                                    // open or create
        filedesc = ::open(pathC, O_CREAT | O_TRUNC | O_RDWR, 0600);
    
    return filedesc;
}
