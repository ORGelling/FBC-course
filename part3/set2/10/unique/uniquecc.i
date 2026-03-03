    // by 

template <typename Type>
Unique<Type>::Unique(Unique const &other)
:
    Unique<Type>()
{
    d_data = other.d_data ? std::make_unique<Type>(*other.d_data) : 0;
}
