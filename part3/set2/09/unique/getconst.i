#include "unique.ih"

    // by 

template <typename Type>
Type const &Unique<Type>::get() const
{
    return *d_data;
}
