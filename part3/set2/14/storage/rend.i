    // by 

template <typename Data>
Storage<Data>::reverse_iterator Storage<Data>::rend()
{
    return reverse_iterator(d_storage.begin());
}
