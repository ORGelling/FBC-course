#ifndef INCLUDED_STORAGE_
#define INCLUDED_STORAGE_

#include <queue>
#include <mutex>
#include <string>

class Storage
{
    std::queue<std::string> d_queue;
    mutable std::mutex      d_mutex;
    
    public:
        Storage();
        
        void push(std::string line);        // passing by value and moving
        void pop();
        
        std::string &front() const;
        
    private:
};
        
#endif

// Make sure the write thread keeps looking in the queue until read thread is
// entirely done! Could use atomic variable?
