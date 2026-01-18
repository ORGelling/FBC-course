#include "main.ih"

void myqsort(int *beg, int *end)
{
    if (end - beg <= 1)
        return;

    int lhs = *beg;
    int *mid = partition(beg + 1, end, 
        [&](int arg)
        {
            return arg < lhs;
        }
    );

    swap(*beg, *(mid - 1));
    
    future<void> leftFuture = async(launch::async, myqsort, beg, mid);
    
    myqsort(mid, end);                          // Use current thread for
                                                // next qsort execution
    leftFuture.get();
}
