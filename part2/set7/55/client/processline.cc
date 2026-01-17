#include "client.ih"

    // by 

void Client::processLine(Storage &queue)
{
    //optional<string> opt = queue.popFront();
    //if (opt.has_value())
    if (optional<string> opt = queue.popFront())
    {                                       
        d_out << *opt << endl;         // endl to flush stream
        ++d_count;
    }
}

/*
{
    string takeFront;
    if (queue.popFront(takeFront))                   
    {                                       
        d_out << takeFront << endl;         // endl to flush stream
        ++d_count;
    }
}
*/
