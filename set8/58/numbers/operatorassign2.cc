#include "numbers.ih"

    // by 

Numbers &Numbers::operator=(Numbers &&tmp)
{
    swap(tmp);
    delete[] tmp.d_data;                    // Manually clearing to prevent
    tmp.d_size = 0;                         // tmp holding "this" object's
    tmp.d_data = nullptr;                   // contents after swap
    return *this;                           
}
