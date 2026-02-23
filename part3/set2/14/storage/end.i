    // by 

template <typename Data>
Storage<Data>::iterator Storage<Data>::end()
{
    return iterator(d_storage.end());
}
