#ifndef INCLUDED_COMPILEQUEUE_              // queue wrapper to keep things
#define INCLUDED_COMPILEQUEUE_              // things nice and encapsulated. 
#include "../compiletask/compiletask.h"     // Offloads responsibility from
#include <queue>                            // the MultiCompile itself
#include <mutex>
#include <optional>                     // this was ok'd by Jurjen for 
                                        // the Storage class of set 7!
class CompileQueue
{
    std::queue<CompileTask> d_queue;
    mutable std::mutex      d_mutex;
    
    mutable bool            d_finished;     // This isn't used. Previous 
                                            // queue wrapper we imitate did,
    public:                                 // but can remove if needed.
        CompileQueue();
        
        void push(CompileTask task);    // passing by value and moving
        
        std::optional<CompileTask> popFront();
                                        // atomic front + pop
        bool empty() const;
        
        void setFinished();
        bool done() const;
};
        
#endif                                  // This is basically a copy of the 
                                        // previous queue wrapper we made 
