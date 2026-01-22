#include "multicompile.ih"

    // by 

MultiCompile::MultiCompile()
:
    d_done(false),
    s_workers(Options::instance().nThreads()),
    s_dispatcher(1),
    d_madeTmp(false)
{}
