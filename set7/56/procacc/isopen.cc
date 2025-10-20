#include "procacc.ih"

    // by 

bool ProcAcc::isOpen() const
{
    if (d_file.is_open())
        return true;
    
    return false;
}
