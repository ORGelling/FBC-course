    // by 

template <typename Type>
Unique<Type>::Unique(Type *ptr)
:
    Unique<Type>()
{
    d_data = ptr;
}
