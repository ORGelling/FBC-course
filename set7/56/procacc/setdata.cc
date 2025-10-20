#include "procacc.ih"

    // by 

namespace {
    enum {
        LOWEST_8_BITS = 0b11111111,
    };
}

void ProcAcc::setData()
{
    d_processName = string(d_record.ac_comm, d_record.ac_comm + 16);

    d_exitcode = d_record.ac_exitcode & LOWEST_8_BITS;        // lowest 8 bits
    //d_signal = (d_record.ac_exitcode >> 8) & LOWEST_8_BITS;       // next 8
}
