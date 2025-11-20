#include "handler.ih"

    // by

int Handler::confirmConnect()
{
    if (!specified(2))
        return 1;
    
    if (connect())
    {
        cout << "connection successful\n";
        return 0;
    }
    
    cout << "could not connect\n";
    return 1;
}
