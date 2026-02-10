#ifndef INCLUDED_CLIENT_
#define INCLUDED_CLIENT_

#include "../../54/storage/storage.h"
#include <fstream>
#include <thread> 

class Client
{
    //JB: Seems to totally make sense: file name does not change, so we make it
    //JB: const. However, now you don't have assignment any more. So this is
    //JB: not a value class. If you're fine with that, ok, certainly for an
    //JB: exercise. But do realize.
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
