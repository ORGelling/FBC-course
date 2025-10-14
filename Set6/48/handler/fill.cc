#include "handler.ih"

    // by

int Handler::fill()
{
    if (confirmConnect())
        return 1;
    
    cout << d_data->fill(stoull(d_argv[2])) << '\n';
    return 0;
}
