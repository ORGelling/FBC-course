#ifndef INCLUDED_RANDOM_
#define INCLUDED_RANDOM_
#include <random>

class Random
{
    static std::mt19937 s_engine;
    std::uniform_int_distribution<size_t> d_distr;
    
    public:
        Random(size_t min, size_t max);
        
        size_t operator()();
        std::pair<size_t, size_t> range();
};
        
//: 

inline Random::Random(size_t min, size_t max)
:
    d_distr(min, max)
{}

inline size_t Random::operator()()
{
    return d_distr(s_engine);
}

inline std::pair<size_t, size_t> Random::range()
{
    return {d_distr.min(), d_distr.max()};
}

#endif
