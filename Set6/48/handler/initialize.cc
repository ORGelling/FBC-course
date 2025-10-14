#include "handler.ih"

    // by 

int Handler::initialize()
{
    if (s_shared.create(100) && connect())
    {
        int tempId = s_shared.id();
        new (d_data) Data(100, tempId);
        
        cout << "initialised memory with id: " << tempId << '\n';
        return 0;
    }
    return 1;
}
