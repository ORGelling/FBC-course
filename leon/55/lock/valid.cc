#include "lock.ih"

    // by 

bool Lock::valid()
{
    if (d_filedesc == -1)
        return false;
    
    if (flock(d_filedesc, LOCK_EX | LOCK_NB) == -1)
        return false;
    
    return true;
}
