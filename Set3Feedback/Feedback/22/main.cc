//JB: 0
#include "main.ih"

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

    //JB: Chances outside the [0,1] interval? Naming.
    size_t colourChance = 50;
    if (argc > 3)
        colourChance = stoul(argv[3]);
    
    string queue[queueSize];
    generateQueue(queue, queueSize, colourChance);
    
    cout << "Queue before sorting:\n";
    showQueue(queue, queueSize);
    
    orderSort(queue, queueSize);
    
    cout << "\nQueue after sorting:\n";
    showQueue(queue, queueSize);
}
