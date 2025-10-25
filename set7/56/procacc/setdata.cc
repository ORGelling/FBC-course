#include "procacc.ih"

    // by 

namespace {
    enum {
        LOWEST_8_BITS = 0b11111111,
    };
}

void ProcAcc::setData()
{                                           // We cut off trailing '\0's
    size_t length = strnlen(d_record.ac_comm, ACCT_COMM);
    d_processName.assign(d_record.ac_comm, d_record.ac_comm + length);
    
    //d_signal = d_record.ac_exitcode & LOWEST_8_BITS;       // lowest 8 bits
    //d_exitcode = (d_record.ac_exitcode >> 8) & LOWEST_8_BITS;     // next 8
    
    d_signal = d_record.ac_exitcode;
}
