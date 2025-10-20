#include "procacc.ih"

    // by 

void ProcAcc::signal() const
{
    if (d_signal != 0) // || d_signal != 0)
        show();
}
