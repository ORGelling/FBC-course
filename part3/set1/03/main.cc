#include "main.ih"

int main()
{
    int *rawInts = rawCapacity<int>(8);
    
    for (size_t idx = 0; idx != 8; ++idx)
    {
        new(rawInts + idx) int{'X'};
        cout << rawInts[idx] << '\n';
    }
}
