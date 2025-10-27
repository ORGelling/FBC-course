#include "procacc.ih"

    // by 

ProcAcc::ProcAcc(string const &fileName)
:
    d_file(fileName, ios::binary)       // reading binary data
{
    if (isOpen())                       // verify
        cerr << "reading from: " << fileName << '\n';
}
