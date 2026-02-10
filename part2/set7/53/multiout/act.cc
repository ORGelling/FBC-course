#include "multiout.ih"

    // by 

void MultiOut::act(size_t threadNr) const
{
    osyncstream out(cout);                      // does all the work for us!
    
    for (size_t idx = 0; idx != 4; ++idx)
    {
        cout << "thread " << threadNr << '\n';                  // unsynced
        
        out << "Line " << idx << " from thread " << threadNr << '\n';
                                                                // synced!
        
        this_thread::yield();                       // as exercise demands
    }
}                                                   // No mutex needed now!
