#include "client.ih"

    // by 

void Client::start(Storage &queue)
{
    d_thread = thread(&Client::run, this, ref(queue));
}
