#include "lock.ih"

    // by 

int Lock::open(filesystem::path path)
{
    string pathStr = path.string();
    char const *pathC = pathStr.c_str();
    int filedesc;
    
    if (filesystem::exists(path))
        filedesc = ::open(pathC, O_RDWR);
    else
        filedesc = ::open(pathC, O_CREAT | O_TRUNC | O_RDWR, 0600);
    
    return filedesc;
}
