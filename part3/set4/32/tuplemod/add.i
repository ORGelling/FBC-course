template <typename Tuple, int nr, typename ...AddParams>
auto add_impl(Tuple const &tuple, Nr<nr>, AddParams &&...addParams)
{
    return add_impl(
        tuple, 
        Nr<nr - 1>{}, 
        get<nr - 1>(tuple),
        std::forward<AddParams>(addParams)...
    );
}

template<typename Tuple, typename... AddParams>
auto add_impl(Tuple const &tuple, Nr<0>, AddParams &&...addParams)
{
    return std::make_tuple(std::forward<AddParams>(addParams)...);
}

template <typename Tuple>
template <typename ...AddParams>
auto TupleMod<Tuple>::add(AddParams &&...addParams)
{
    return add_impl(
        d_tuple,
        Nr<std::tuple_size<Tuple>::value>{},
        std::forward<AddParams>(addParams)...
    );
}
