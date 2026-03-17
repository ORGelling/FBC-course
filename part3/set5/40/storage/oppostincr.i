template <typename Data>
typename Storage<Data>::iterator Storage<Data>::iterator::operator++(int)
{
    return iterator{ d_current++ };
}
