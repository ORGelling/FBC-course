#ifndef INCLUDED_PROCACC_
#define INCLUDED_PROCACC_

#include <fstream>
#include <string>

class ProcAcc
{
    ifstream d_file;
    acct_v3 d_record;
    std::string d_processName;
    uint16_t d_exitcode;
    uint16_t d_signal;
    
    public:
        ProcAcc();
        
        process(char flag);
        
    private:
        signal(size_t sig) const;
        isOpen() const;
};
        
#endif
