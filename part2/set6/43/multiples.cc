#include "main.ih"

size_t multiples(vector<size_t> const &vs)
{
    return count_if(vs.begin(), vs.end() - 1, 
        [&vs](size_t const &value)
        {
            return value == *(&value + 1);
        }                                   // we count if value is the same
    );                                      // as the next one in the vector
}                                   // by dereferencing (value's address + 1)
