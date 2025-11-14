#include "numbers/numbers.h"
#include <iostream>

using namespace std;

int main()
{
    int *array = new int[10];
    for (int index = 0; index != 10; ++index)
        array[index] = index * index;
    
    Numbers nums(10, array);

    Numbers nums2(nums);
    Numbers nums3(move(nums));
    
    delete[] array;
}
