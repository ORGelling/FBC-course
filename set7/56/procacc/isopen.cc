#include "procacc.ih"

    // by 

bool ProcAcc::isOpen() const
{
    return (d_file.is_open() ? true : false);
}
