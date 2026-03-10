template <typename IData, template <typename> class Container>
ItType::Iterator(typename Container<IData *>::iterator const &current)
:
    d_current(current)
{}
