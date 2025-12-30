#ifndef INCLUDED_FILLUNIQUE_
#define INCLUDED_FILLUNIQUE_
#include "../random/random.h"
#include <vector>
#include <random>

class FillUnique
{
    size_t d_size;
    size_t d_min;
    size_t d_max;
    
    Random d_rng;
    
    public:
        FillUnique(size_t size, size_t min, size_t max);
        
        void fill(std::vector<size_t> &randoms);
        
    private:
        void storeValue(std::vector<size_t> &rVec);
        
};
        
#endif
