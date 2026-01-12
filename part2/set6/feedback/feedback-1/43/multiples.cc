#include "main.ih"

size_t multiples(vector<size_t> const &vs)
{
    return count_if(vs.begin(), vs.end() - 1, 
        [&vs](size_t const &value)
        {
            return value == *(&value + 1);
        }
    );
}
