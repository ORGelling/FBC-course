    // by 

template <typename Type>
Simple<Type *>::~Simple()
{
    if (d_value)
        delete d_value;
}
