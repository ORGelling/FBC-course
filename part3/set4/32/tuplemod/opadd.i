template <typename ...Lhs, typename ...Rhs>
auto operator+(std::tuple<Lhs ...> const &lhs, 
                                            std::tuple<Rhs ...> const &rhs)
{
    return opadd_impl(
        lhs,
        rhs,
        Nr<sizeof...(Rhs)>{}
    );
}
