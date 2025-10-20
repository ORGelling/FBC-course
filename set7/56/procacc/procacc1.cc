#include "procacc.ih"

    // by 

ProcAcc::ProcAcc()
//:
{
    d_file.open("/var/log/account/pacct", ios::binary);
 
    isOpen();
}
