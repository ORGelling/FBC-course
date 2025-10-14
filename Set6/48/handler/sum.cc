#include "handler.ih"

    // by

int Handler::sum()
{
    if (confirmConnect())
        return 1;
    
    cout << d_data->sum() << '\n';
    return 0;
}
