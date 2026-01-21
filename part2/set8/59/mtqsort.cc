#include "main.ih"

void mtqsort(int *beg, int *end)            // we used a different name since
{                                           // since "qsort" caused issues  
    if (end - beg <= 1)                     // with template arguments and 
        return;                             // return values for async
                                            // see info file for more
    int lhs = *beg;
    int *mid = partition(beg + 1, end, 
        [&](int arg)
        {
            return arg < lhs;
        }
    );

    swap(*beg, *(mid - 1));
    
    future<void> leftFuture = async(launch::async, mtqsort, beg, mid);
    
    mtqsort(mid, end);                          // Use current thread for
                                                // next qsort execution
    leftFuture.get();
}
