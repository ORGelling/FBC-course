template <typename IData, template <typename> class Container>
inline ItType::reference ItType::operator*() const
{
    return **d_current;
}
