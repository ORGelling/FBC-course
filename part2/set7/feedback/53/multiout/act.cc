#include "multiout.ih"

    // by 

void MultiOut::act(size_t threadNr) const
{
    lock_guard<mutex> _{ d_oMutex };        // automatic scoped locking 
    
    //d_oMutex.lock();                                    // manual locking
    cout << "thread " << threadNr << '\n';
    for (size_t idx = 0; idx != 4; ++idx)
        //JB: Since this is all the payload we have, execution essentially
        //JB: becomes sequential by locking the mutex...
        cout << "Line " << idx << " from thread " << threadNr << '\n';
    //d_oMutex.unlock();                                  // manual unlocking
    //JB: ...because nothing is done after the mutex is unlocked.
}                                           // lock_guard goes o.o.s. here
                                            // and releases the lock

//<< this_thread::get_id() << '\n';                 // to show thread id 
//                                                  // rather than number
