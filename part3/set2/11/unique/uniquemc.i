    // by 

template <typename Type>
Unique<Type>::Unique(Unique &&other)
:
    d_data(std::move(other.d_data))
{}
