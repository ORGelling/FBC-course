#include "numbers.ih"

    // by 

void Numbers::swap(Numbers &other)
{
    size_t tempSize = other.d_size;
    other.d_size = d_size;
    d_size = tempSize;
    
    int *tempData = other.d_data;
    other.d_data = d_data;
    d_data = tempData;
}
