#ifndef INCLUDED_SEMAPHORE_
#define INCLUDED_SEMAPHORE_
#include <atomic>
#include <mutex>
#include <condition_variable>

class Semaphore
{
    std::atomic<size_t> d_nAvailable;   // atomic for safe use of size()
    std::mutex d_mutex;
    std::condition_variable d_condition;
    
    public:
        Semaphore(size_t nAvailable);
        
        void notify();
        void notify_all();
        
        size_t size() const;            // doesn't lock the mutex
        void wait();
};

inline size_t Semaphore::size() const
{
    return d_nAvailable;
}

#endif
