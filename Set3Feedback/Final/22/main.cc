//JB: 1
#include "orderSort.h"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    if (argc == 1 || stoul(argv[1]) == 0)
    {
        usage();
        return 0;
    }
    
    size_t const queueSize = stoul(argv[1]);
    
    if (argc > 2)
        srandom(stoul(argv[2]));
    
    size_t colourPercentage = 50;
    if (argc > 3)
        colourPercentage = stoul(argv[3]);
    
    string queue[queueSize];
    generateQueue(queue, queueSize, colourPercentage);
    
    cout << "Queue before sorting:\n";
    showQueue(queue, queueSize);
    
    orderSort(queue, queueSize);
    
    cout << "\nQueue after sorting:\n";
    showQueue(queue, queueSize);
}
