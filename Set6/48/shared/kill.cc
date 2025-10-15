#include "shared.ih"

    // by

bool Shared::kill(int id)
{
    int check = shmctl(id, IPC_RMID, nullptr);

    return check != -1;
}
