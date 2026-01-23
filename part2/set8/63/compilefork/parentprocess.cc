#include "compilefork.ih"

    // by 

void CompileFork::parentProcess()
{
    d_childExit = waitForChild();               // bored dad just here to log 
}                                               // the child's exit value
