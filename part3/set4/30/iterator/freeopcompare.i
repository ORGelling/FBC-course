template <typename IData, template <typename> class Container>
inline std::strong_ordering operator<=>(ItType const &lhs, ItType const &rhs)
{
    return lhs.d_current <=> rhs.d_current;
}
