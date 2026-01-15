#include "client.ih"

    // by 

void Client::processLine(Storage &queue)    // The queue is atomic, but we
{                                           // need front() and pop() to act
    lock_guard<mutex> _{ s_qMutex };        // atomically together as well!
    if (not queue.empty())              
    {                                       
        d_out << queue.front() << endl;         // endl to flush stream
        queue.pop();
        ++d_count;
    }
}
