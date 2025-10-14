#include "handler.ih"

    // by 

int Handler::element()
{
    // show shared data element d_argv[2]
    // d_argv[1] = ID
    
    if (confirmConnect())
        return 1;
    
    cout << d_data->element(stoi(d_argv[2])) << '\n';
    return 0;
}
