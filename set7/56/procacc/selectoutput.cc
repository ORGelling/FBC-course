#include "procacc.ih"

    // by 

void ProcAcc::selectOutput() const
{
    if (d_signal != 0) // || d_exitcode != 0)
        show();                         // selects when (not) to show
}
