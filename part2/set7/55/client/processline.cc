#include "client.ih"

    // by 

void Client::processLine(Storage &queue)
{
    if (optional<string> opt = queue.popFront())
    {                                       
        d_out << *opt << endl;         // endl to flush stream
        ++d_count;
    }
}
