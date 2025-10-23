#include "numbers.ih"

    // by 

Numbers &Numbers::operator=(Numbers &&tmp)
{
    swap(tmp);
    tmp.d_size = 0;                         // Manually clearing to prevent
    tmp.d_data = nullptr;                   // tmp holding calling object
    return *this;                           // contents after swap
}
