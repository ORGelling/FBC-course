#include "procacc.ih"

    // by 

void ProcAcc::signal() const
{
    if (d_exitcode != 0 || d_signal != 0)
        showAll();
}
