#include "multiout.ih"

    // by 

void MultiOut::run() const
{
    vector<thread> threads;
    
    for (size_t idx = 0; idx != d_nThreads; ++idx)
        threads.emplace_back(&MultiOut::act, this, idx);
    
    for (thread &thr : threads)
        thr.join();
}
