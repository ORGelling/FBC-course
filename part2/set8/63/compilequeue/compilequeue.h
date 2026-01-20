#ifndef INCLUDED_COMPILEQUEUE_
#define INCLUDED_COMPILEQUEUE_
#include "../compiletask/compiletask.h"
#include <queue>
#include <mutex>
#include <optional>                     // this was ok'd by Jurjen for 
                                        // the Storage class of set 7!
class CompileQueue
{
    std::queue<CompileTask> d_queue;
    mutable std::mutex      d_mutex;
    
    mutable bool            d_finished;
    
    public:
        CompileQueue();
        
        void push(CompileTask task);    // passing by value and moving
        
        std::optional<CompileTask> popFront();
                                        // atomic front + pop
        bool empty() const;
        
        void setFinished();
        bool done() const;
};
        
#endif
