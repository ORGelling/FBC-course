    // by 

template <typename Data>
bool Storage<Data>::iterator::operator==(iterator const &rhs) const
{
    return d_current == rhs.d_current;
}
