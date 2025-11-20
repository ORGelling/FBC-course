#include "numbers.ih"

    // by 

ostream &operator<<(ostream &out, Numbers &nums)
{
    for (size_t index = 0; index != nums.d_size; ++index)
        out << nums.d_nums[index] << ' ';
                                        // writing all numbers in nums    
    return out;
}
