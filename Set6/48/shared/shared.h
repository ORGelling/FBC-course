#ifndef INCLUDED_SHARED_
#define INCLUDED_SHARED_

#include "../data/data.h"

class Shared
{
    int d_id;                               // the ID of the shared segment

    public:
        Shared();
        
        // shmget arg1: IPC_PRIVATE arg3: 0600
        bool create(size_t nValues);        // a shared segment for Data with
                                            // d_data having nValues elements

        Data *connect();    // shmat 2,3: 0 // connects segment d_id      1.cc
        Data *connect(char const *id);      // connects segment id (NTBS) 2.cc

        int id() const;                     // inline, returns d_id

                        // shmdt: Data *    // disconnect a shared segment 
        static bool disconnect(Data const *ptr);
        static bool kill(int id);           // delete a shared segment
};                      // shmctl arg2: IPC_RMID arg3: smhid_ds address

inline Shared::Shared()
:
    d_id(-1)
{}

inline int Shared::id() const
{
    return d_id;
}

#endif
