    // by 

template <typename Type>
Unique<Type>::Unique(Type *ptr)
:
    d_data(ptr)
{
    ++s_count;
    ++s_actual;
}
