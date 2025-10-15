#include "shared.ih"

    // by

bool Shared::disconnect(Data const *ptr)
{
    int check = shmdt(static_cast<void const *>(ptr));
    
    return check != -1;
}
