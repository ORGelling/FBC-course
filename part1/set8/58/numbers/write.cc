#include "numbers.ih"

    // by 

void Numbers::write(ostream &out) const
{
    for (size_t index = 0; index != d_size; ++index)
        out << "value " << index << ": " << d_data[index] << '\n';
}
