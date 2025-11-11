#include "handler.ih"

    // by 

int Handler::initialize()
{
    if (!specified(1))
        return 1;
    
    if (s_shared.create(100))
    {
        d_data = s_shared.connect();
        int tempId = s_shared.id();
        new (d_data) Data(100, tempId);
        
        cout << "initialised memory with id: " << tempId << '\n';
        return 0;
    }
    cout << "failed to initialise memory\n";
    return 1;
}
