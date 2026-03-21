template <typename IData, template <typename> class Container>
inline Container<IData *>::difference_type operator-(ItType const &lhs, 
                                                        ItType const &rhs)
{
    return lhs.d_current - rhs.d_current;
}
