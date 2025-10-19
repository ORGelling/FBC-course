#include "lock.ih"

    // by 

Lock::~Lock()
{
    if (valid())
        ::close(d_filedesc);
}
