template <typename Type>
decltype(auto) Data::get(size_t idx) const
{
    return Convert<Type, typename Traits<Type>::Tag>::convert(d_data[idx]);
}
