#include "client.ih"

    // by 

void Client::run(Storage &queue)
{
    while (not queue.done())
    {
        processLine(queue);
        
        this_thread::sleep_for(chrono::milliseconds(10));
    }
}
