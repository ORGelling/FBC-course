#include "handler.h"

    // by

Handler::~Handler()
{
    if (disconnect(d_data))
        cout << "disconnected memory segment: " << argv[2] << '\n';
    else
        cout << "disconnection failed\n";
}
