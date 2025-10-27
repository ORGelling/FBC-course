#include "procacc.ih"

    // by 

int ProcAcc::process(bool showAll)
{
    if (!isOpen())                      // verify
    {
        cerr << "failed to open file\n";
        return 1;
    }
                            // cast binary data into acct_v3 struct in loop
    while (d_file.read(reinterpret_cast<char *>(&d_record), sizeof(d_record)))
    {
        setData();                      // extract its data into members
        (this->*s_output[showAll])();   // picks normal or full output
    }
    return 0;
}
