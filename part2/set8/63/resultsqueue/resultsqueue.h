#ifndef INCLUDED_RESULTSQUEUE_
#define INCLUDED_RESULTSQUEUE_
#include "../result/result.h"
#include <queue>
#include <mutex>
#include <future>
#include <optional>

class ResultsQueue
{
    std::queue<std::shared_future<Result>> d_queue;
    mutable std::mutex d_mutex;
    
    public:
        void push(std::shared_future<Result> result);
        
        std::optional<std::shared_future<Result>> popFront();
        
        bool empty() const;
};
        
#endif
