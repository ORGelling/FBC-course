#ifndef INCLUDED_CLIENT_
#define INCLUDED_CLIENT_

#include "../../54/storage/storage.h"

class Client
{
    Storage &d_storage;
    std::mutex &d_sMutex;
    std::string const d_fileName;
    size_t d_size;
    
    public:
        Client(Storage &queue, std::mutex &lock, std::string const &file);

    private:
};
        
#endif
