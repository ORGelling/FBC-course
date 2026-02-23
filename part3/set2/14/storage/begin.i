    // by 

template <typename Data>
Storage<Data>::iterator Storage<Data>::begin()
{
    return iterator(d_storage.begin());
}
