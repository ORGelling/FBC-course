#include "handler.ih"

    // by 

bool Handler::connect()
{
    // check arguments to select connect() or connect(char const *id)
    d_data = s_shared.connect(d_argv[1]);
    return d_data != nullptr;
}
