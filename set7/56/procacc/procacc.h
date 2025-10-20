#ifndef INCLUDED_PROCACC_
#define INCLUDED_PROCACC_

#include <fstream>
#include <string>
#include <linux/acct.h>

class ProcAcc
{
    std::ifstream d_file;
    acct_v3 d_record;
    std::string d_processName;
    
    int d_exitcode;
    //int d_signal;
 
    static void (ProcAcc::*s_output[])() const;
    
    public:
        ProcAcc(std::string const fileName);
        // ~ProcAcc();                                  // Needed?        
        int process(bool flag);
        
    private:
        void signal() const;
        void show() const;
        bool isOpen() const;
        void setData();
};
        
#endif
