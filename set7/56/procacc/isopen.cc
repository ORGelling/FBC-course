#include "procacc.ih"

    // by 

bool ProcAcc::isOpen()
{
    if (d_file.is_open())
        return true;
    
    cerr << "failed to open file\n";
    return false;
}
