    // by 

template <typename Data>
Storage<Data>::iterator Storage<Data>::iterator::operator++(int)
{
    return iterator(d_current++);
}
