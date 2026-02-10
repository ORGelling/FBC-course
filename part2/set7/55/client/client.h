#ifndef INCLUDED_CLIENT_
#define INCLUDED_CLIENT_

#include "../../54/storage/storage.h"
#include <fstream>
#include <thread> 

class Client
{
    std::string const d_fileName;
    std::ofstream d_out;
    size_t d_count;

    std::thread d_thread;
    
    public:
        Client(std::string const &fileName);
        
        void start(Storage &queue);
        void join();
        
        void run(Storage &queue);
        
        size_t count() const;
        std::string const &name() const;
        
    private:
        void processLine(Storage &queue);
};

//:

inline size_t Client::count() const
{
    return d_count;
}

inline std::string const &Client::name() const
{
    return d_fileName;
}

#endif
