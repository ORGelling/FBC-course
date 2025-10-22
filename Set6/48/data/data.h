#ifndef INCLUDED_DATA_
#define INCLUDED_DATA_

#include <cstddef>

class Data
{
    int d_id;                       // the ID of the shared memory
    size_t d_size;                  // the number of elements in d_data
    size_t d_sum;                   // the sum of the elements in d_data
    size_t d_data[1];               // an array of d_size elements.

    public:
        Data() = default;           // uses the object
        Data(size_t size, int id);  // initializes the object           1.cc

        int id() const;             // ID of the shared memory block
        size_t fill(size_t seed);   // fill d_data, return the element's sum
        size_t sum() const;         // return the element's sum

        size_t element(size_t idx) const;   // return d_data[idx]
};
        
inline int Data::id() const
{
    return d_id;
}

inline size_t Data::sum() const
{
    return d_sum;
}

#endif
