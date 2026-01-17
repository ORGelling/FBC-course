#include "multiout.ih"

    // by 

void MultiOut::act(size_t threadNr) const
{
    osyncstream out(cout);
    
    for (size_t idx = 0; idx != 4; ++idx)
    {
        cout << "thread " << threadNr << '\n';                  // unsynced
        out << "Line " << idx << " from thread " << threadNr << '\n';
                                                                // synced!
        this_thread::yield();
    }
}                                                   // No mutex needed now!
