template <typename IData, template <typename> class Container>
inline std::ptrdiff_t operator-(ItType const &lhs, ItType const &rhs)
{
    return lhs.d_current - rhs.d_current;
}
