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
