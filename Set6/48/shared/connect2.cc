#include "shared.ih"

    // by 

Data *Shared::connect(char const *id)
{
    void *dataPtr = shmat(stoi(id), 0, 0);
    
    if (dataPtr == (void *)(-1))
        return nullptr;
    
    return static_cast<Data *>(dataPtr);
}
