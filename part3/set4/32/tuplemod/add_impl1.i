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
