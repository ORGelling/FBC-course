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
