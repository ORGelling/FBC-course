#include "multicompile.ih"

    // by 

MultiCompile::MultiCompile()
:
    d_done(false),
    s_workToDo(0),
    s_dispatcher(Options::instance().nThreads()),
    d_madeTmp(false)
{}
