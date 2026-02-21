    // by 

template <typename Type>
Unique<Type>::~Unique()
{
    --s_actual;
}
