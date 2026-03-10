template<typename TupleL, typename TupleR, int nr>
auto opadd_impl(TupleL const &lhs, TupleR const &rhs, Nr<nr>)
{
    TupleMod<TupleL> tmp{ lhs };
    auto newTuple = tmp.add(
                        std::get<std::tuple_size<TupleR>::value - nr>(rhs));
    return opadd_impl(
        newTuple, 
        rhs, 
        Nr<nr - 1>{}
    );
}

template<typename TupleL, typename TupleR>
auto opadd_impl(TupleL const &lhs, TupleR const &rhs, Nr<0>)
{
    return lhs;
}

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
