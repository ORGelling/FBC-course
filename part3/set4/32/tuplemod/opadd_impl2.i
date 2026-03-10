template<typename TupleL, typename TupleR>
auto opadd_impl(TupleL const &lhs, TupleR const &rhs, Nr<0>)
{
    return lhs;
}
