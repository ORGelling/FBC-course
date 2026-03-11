template<typename TupleL, typename TupleR, int nr>
auto opadd_impl(TupleL const &lhs, TupleR const &rhs, Nr<nr>)
{
    TupleMod<TupleL> tmp{ lhs };        // tmp MupleMod to call add() on
    auto newTuple = tmp.add(
                        std::get<std::tuple_size<TupleR>::value - nr>(rhs));
                                        // we add the leftmost element of rhs
    return opadd_impl(
        newTuple,                       // and recurse with new tuple
        rhs, 
        Nr<nr - 1>{}
    );                                  // can potentially unpack rhs 
}                                       // entirely and add all in one go?

template<typename TupleL, typename TupleR>
auto opadd_impl(TupleL const &lhs, TupleR const &rhs, Nr<0>)
{
    return lhs;                         // done appending!
}

template <typename ...Lhs, typename ...Rhs>
auto operator+(std::tuple<Lhs ...> const &lhs, 
                                            std::tuple<Rhs ...> const &rhs)
{
    return opadd_impl(                  // we call the implementation here,
        lhs,                            // hand it both tuples,
        rhs,
        Nr<sizeof...(Rhs)>{}            // counts rhs's elements since those
    );                                  // need to be added to lhs
}
