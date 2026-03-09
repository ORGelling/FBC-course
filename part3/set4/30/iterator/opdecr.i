template <typename IData, template <typename> class Container>
ItType &ItType::operator--()
{
    --d_current;
    return *this;
}
