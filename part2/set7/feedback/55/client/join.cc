#include "client.ih"

    // by 

void Client::join()
{
    if (d_thread.joinable())
        d_thread.join();
}
