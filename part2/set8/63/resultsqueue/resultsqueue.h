#ifndef INCLUDED_RESULTSQUEUE_
#define INCLUDED_RESULTSQUEUE_
#include "../result/result.h"
#include <queue>
#include <mutex>
#include <optional>

class ResultsQueue
{
    std::queue<Result> d_queue;
    mutabl std::mutex  d_mutex;
    
    public:
        void push(Result result);       // passing by value and moving 
        
        std::optional<Result> popFront();
        
        bool empty() const;
};
        
#endif
