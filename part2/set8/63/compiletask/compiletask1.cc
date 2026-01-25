#include "compiletask.ih"

    // by 

CompileTask::CompileTask(string const &cmnds, PackagedTask &&tmp)
:
    d_commands(cmnds),
    d_task(move(tmp))
{}
