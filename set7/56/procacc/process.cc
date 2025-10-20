#include "procacc.ih"

    // by 

int ProcAcc::process(size_t flag)
{
    if (isOpen())
        return 1;
    
    while (file.read(reinterpret_cast<char *>(&d_record), sizeof(d_record)))
    {
        string d_processsName(d_record.ac_comm, d_record.ac_comm + 16);
        size_t nullPos = processName.find('\0');
        
        if (nullPos != string::npos)
            d_processName = d_processName.substr(0, nullPos);
        
        d_exitcode = d_record.ac_exitcode & 0xFF;
        d_signal = (record.ac_exitcode >> 8) & 0xFF;
        
        (this->*s_output[flag])();
    }
}
