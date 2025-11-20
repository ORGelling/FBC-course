#include "handler.ih"

    // by 

int Handler::element()
{
    if (!available(3))
        return 1;
    
    cout << d_data->element(stoi(d_argv[2])) << '\n';
    return 0;
}
