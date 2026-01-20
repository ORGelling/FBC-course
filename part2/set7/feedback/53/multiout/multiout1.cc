#include "multiout.ih"

    // by 

MultiOut::MultiOut(char const *count)
:
    d_nThreads(stoul(count))
{}
