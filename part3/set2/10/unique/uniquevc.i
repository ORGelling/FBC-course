    // by 
    
template <typename Type>
Unique<Type>::Unique(Type const &value)
:
    Unique<Type>()
{
    d_data = std::make_unique<Type>(value);
}
