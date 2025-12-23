//JB: 1
//JB: Some COCO, but I won't bother.
#ifndef INCLUDED_FACTORY_
#define INCLUDED_FACTORY_

#include <stack>

#include "../train/train.h"

class Factory
{
    using Stack = std::stack<size_t>;

    size_t d_sideSize;

    Stack d_rhs;                                    // RHS of the main track
    Stack d_side;                                   // max size: d_sideSize

    public:
        Factory(size_t maxSide = 10);

        void reverse(Train &train);     // reverses order of the train's cars

    private:
        void put(Stack &to, Stack &from, size_t nCars);
        void revert(Stack &train);      // mechanical loop of reverse.cc

        static size_t min(size_t left, size_t right);               // .ih
};

#endif
