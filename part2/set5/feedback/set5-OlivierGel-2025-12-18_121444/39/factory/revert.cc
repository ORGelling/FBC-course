#include "factory.ih"

void Factory::revert(Stack &train)          // The ceiling of nCars/sideSize 
{                                           // gives total iterations needed
    size_t maxLoops = (train.size() + d_sideSize - 1) / d_sideSize;
    for (size_t count = 0; count != maxLoops; ++count)
    {
        put(d_side, train, d_sideSize);         // fill sidetrack
                                                
        put(train, d_rhs, count * d_sideSize);  // store reordered cars from
                                                // rhs in train temporarily
                                                
        put(d_rhs, d_side, d_sideSize);         // reverse sidetrack cars
                                                // into rhs track
                                                
        put(d_rhs, train, count * d_sideSize);  // set stored reordered cars
    }                                           // back into rhs to continue
}                                               // the loop
