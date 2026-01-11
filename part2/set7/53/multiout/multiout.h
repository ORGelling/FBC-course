#ifndef INCLUDED_MULTIOUT_
#define INCLUDED_MULTIOUT_
//#include <cstddef>
#include <mutex>

class MultiOut
{
    size_t d_nThreads;
    mutable std::mutex d_oMutex;
    
    public:
        MultiOut(char const *count);
        
        void run() const;
    private:
        void act(size_t threadNr) const;
};
        
#endif
