#include "compilefork.ih"

    // by 

CompileFork::CompileFork(string const &command, string const &errFile)
:
    d_command(command),
    d_errFile(errFile)
{}
