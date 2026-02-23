    // by 

template <typename Data>
Storage<Data>::iterator Storage<Data>::iterator::operator+(int step) const
{
    return iterator{ d_current + step };
}
