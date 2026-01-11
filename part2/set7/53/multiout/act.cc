#include "multiout.ih"

    // by 

void MultiOut::act(size_t threadNr) const
{
    lock_guard<mutex> _{ d_oMutex };        // automatic scoped locking 
    
    //d_oMutex.lock();                                    // manual locking
    cout << "thread " << threadNr << '\n';
    for (size_t idx = 0; idx != 4; ++idx)
        cout << "Line " << idx << " from thread " << threadNr << '\n';
    //d_oMutex.unlock();                                  // manual unlocking

}                                           // lock_guard goes o.o.s. here
                                            // and releases the lock

//<< this_thread::get_id() << '\n';                 // to show thread id 
//                                                  // rather than number
