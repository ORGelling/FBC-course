#include "handler.ih"

    // by

int Handler::sum()
{
    if (!available(2))
        return 1;
    
    cout << d_data->sum() << '\n';
    return 0;
}
