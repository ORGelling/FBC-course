#ifndef INCLUDED_STORAGE_
#define INCLUDED_STORAGE_

#include <queue>
#include <mutex>
#include <string>

class Storage
{
    std::queue<std::string> d_queue;
    mutable std::mutex      d_qMutex;
    
    mutable bool            d_finished;
    
    public:
        Storage();
        
        void push(std::string line);        // passing by value and moving
        std::string front();                // pass by value lest refs dangle
        void pop();
        
        bool empty() const;
        
        void setFinished();                 // done parsing lines
        bool done() const;                  // done parsing and queue empty
};

#endif

// Make sure the write thread keeps looking in the queue until read thread is
// entirely done! Could use atomic variable?
