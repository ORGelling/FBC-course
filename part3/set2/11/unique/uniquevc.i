#include <utility>

    // by 
    
template <typename Type>
Unique<Type>::Unique(Type &&value)
:
    d_data(std::make_unique<Type>(std::forward<Type>(value)))
{}
