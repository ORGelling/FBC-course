    // by 

template <typename Data>
std::strong_ordering Storage<Data>::iterator::operator<=>(
                                                   iterator const &rhs) const
{
    return d_current <=> rhs.d_current;
}
