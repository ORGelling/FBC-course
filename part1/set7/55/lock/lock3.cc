#include "lock.ih"

    // by 

Lock::~Lock()
{
    if (valid())                    // IF locked file, close/unlock
        close(d_filedesc);
}                                   // Else nothing needed to be done
