#include "handler.ih"

    // by

Handler::~Handler()
{
    if (d_data && Shared::disconnect(d_data))
        cout << "disconnected memory segment\n";
    else
        cout << "disconnection failed\n";
}
