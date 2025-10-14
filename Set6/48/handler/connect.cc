#include "handler.ih"

    // by 

bool Handler::connect()
{
    // check arguments to select connect() or connect(char const *id)
    d_data = s_shared.connect();
    return d_data != nullptr;
}
