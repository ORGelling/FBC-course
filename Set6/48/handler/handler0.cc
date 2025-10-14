#include "handler.ih"

    // by

Handler::~Handler()
{
    if (d_data) 
        Shared::disconnect(d_data);
}
