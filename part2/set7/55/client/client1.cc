#include "client.ih"

    // by 

Client::Client(Storage &queue, mutex &lock, string const &file)
:
    d_storage(queue),
    d_sMutex(lock),
    d_fileName(file),
    d_size(0)
{}
