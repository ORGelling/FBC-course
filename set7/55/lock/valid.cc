#include "lock.ih"

    // by 

bool Lock::valid()
{
    if (d_filedesc == -1 || flock(d_filedesc, LOCK_EX | LOCK_NB) == -1)
        return false;               // d_fd == -1 means no file
                                    // else check locking success
    return true;
}                   // Using a ternary here would probably be a bit much
