#include "random.ih"

    // by 

mt19937 Random::s_engine{static_cast<unsigned>(time(0))};
