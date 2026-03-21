template <typename IData, template <typename> class Container>
inline ItType ItType::operator+(difference_type step) const
{
    return Iterator{ d_current + step };
}
