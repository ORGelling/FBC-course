#include "compilefork.ih"

    // by 

void CompileFork::parentProcess()
{
    d_childExit = waitForChild();
}
