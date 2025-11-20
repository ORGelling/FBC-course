#include "shared.ih"

    // by

bool Shared::create(size_t nValues)
{
    size_t dataSize = sizeof(Data) + sizeof(size_t) * (nValues - 1);
                                        // already 1 size_t in Data
    d_id = shmget(IPC_PRIVATE, dataSize, 0600);
             // can use IPC_CREAT | 0600 ^ here too
    return d_id != -1;
}
