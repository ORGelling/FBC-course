    // by 

template <typename Type>
Unique<Type> &Unique<Type>::operator=(Unique const &other)
{
    Unique<Type> tmp{ other };
    d_data.swap(tmp.d_data);        // can define our own swap too if needed
    return *this;
}
