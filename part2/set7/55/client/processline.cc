#include "client.ih"

    // by 

void Client::processLine(Storage &queue)
{
    lock_guard<mutex> _{ s_qMutex };
    if (not queue.empty())
    {
        d_out << queue.front() << endl;
        queue.pop();
        ++d_count;
    }
}
