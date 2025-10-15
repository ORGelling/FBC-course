#include "shared.ih"

    // by

Data *Shared::connect()
{
    void *dataPtr = shmat(d_id, 0, 0);
    
    if (dataPtr == (void *)(-1))
        return nullptr;
    
    return static_cast<Data *>(dataPtr);
}
