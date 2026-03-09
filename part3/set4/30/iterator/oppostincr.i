template <typename IData, template <typename> class Container>
ItType ItType::operator++(int)
{
    Iterator tmp{ *this };
    ++d_current;
    return tmp;
}
