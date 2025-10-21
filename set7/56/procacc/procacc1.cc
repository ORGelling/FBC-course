#include "procacc.ih"

    // by 

ProcAcc::ProcAcc(string const &fileName)
:
    d_file(fileName, ios::binary)
{
    if (isOpen())
        cerr << "reading from: " << fileName << '\n';
}
