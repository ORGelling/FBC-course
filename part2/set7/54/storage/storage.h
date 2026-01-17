#ifndef INCLUDED_STORAGE_
#define INCLUDED_STORAGE_

#include <queue>
#include <mutex>
#include <string>

class Storage
{
    std::queue<std::string> d_queue;
    mutable std::mutex      d_qMutex;
    
    mutable bool            d_finished;     // Probably doesn't need mutable
                                            // but can't hurt I think
    public:
        Storage();
        
        void push(std::string line);        // passing by value and moving
        std::string front() const;          // pass by value lest refs dangle
        void pop();
        
        bool popFront(std::string &front);  // for 55: atomic empty+pop+front
        
        bool empty() const;
        
        void setFinished();                 // done parsing lines
        bool done() const;                  // done parsing and queue empty
};

#endif
