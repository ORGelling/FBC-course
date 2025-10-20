#include "procacc.ih"

    // by 

ProcAcc::ProcAcc(string const fileName)
//:
{
    d_file.open(fileName, ios::binary);
 
    isOpen();
}
