    // by 
    
template <typename Type>
Unique<Type>::Unique(Type const &value)
:
    d_data(std::make_unique<Type>(value))
{}
