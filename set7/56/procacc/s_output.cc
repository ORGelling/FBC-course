#include "procacc.ih"

    // by 

void (ProcAcc::*ProcAcc::s_output[])() const =
{
    &ProcAcc::selectOutput,
    &ProcAcc::show
};
