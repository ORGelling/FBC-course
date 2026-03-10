template<typename Tuple, typename... AddParams>
auto add_impl(Tuple const &tuple, Nr<0>, AddParams &&...addParams)
{
    return std::make_tuple(std::forward<AddParams>(addParams)...);
}
