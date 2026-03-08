template <typename Type>
decltype(auto) Data::get<Type>(size_t idx) const
{
    return Type{}; 
    
    // getter<Type, typename Category<Type>::Tag>::get(d_data[idx]);
}
