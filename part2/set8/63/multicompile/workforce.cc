#include "multicompile.ih"

    // by 

void MultiCompile::workforce()
{
    for (size_t idx = 0; idx != Options::instance().nThreads(); ++idx)
        v_threads.push_back(thread{ worker };       // create worker threads
}
