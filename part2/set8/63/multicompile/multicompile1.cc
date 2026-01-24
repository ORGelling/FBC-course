#include "multicompile.ih"

    // by 

MultiCompile::MultiCompile()
:
    d_done(false),
    d_workToDo(0),
    d_dispatcher(Options::instance().nThreads()),
    d_madeTmp(false)
{}
