#include "client.ih"

    // by 

void Client::processLine(Storage &queue)
{
    string takeFront;
    if (queue.popFront(takeFront))                   
    {                                       
        d_out << takeFront << endl;         // endl to flush stream
        ++d_count;
    }
}
