    // by 

template <typename Data>
Storage<Data>::reverse_iterator Storage<Data>::rbegin()
{
    return reverse_iterator(d_storage.end());
}
