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
    Numbers nums4{1, 5, 8, 7, 4, 36, 64, 6, 3};
    
    cout << "1:\n" << nums 
        << "\n2:\n" << nums2 
        << "\n3:\n" << nums3 
        << "\n4:\n" << nums4 << '\n';
    
    delete[] array;
}
