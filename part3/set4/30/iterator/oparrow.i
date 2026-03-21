template <typename IData, template <typename> class Container>
inline ItType::pointer ItType::operator->() const
{
    return *d_current;
}
