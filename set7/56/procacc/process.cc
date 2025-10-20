#include "procacc.ih"

    // by 

int ProcAcc::process(bool showAll)
{
    if (!isOpen())
    {
        cerr << "failed to open file\n";
        return 1;
    }
    
    while (d_file.read(reinterpret_cast<char *>(&d_record), sizeof(d_record)))
    {
        setData();
        (this->*s_output[showAll])();
    }
    return 0;
}
