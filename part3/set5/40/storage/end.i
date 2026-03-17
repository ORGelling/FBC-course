template <typename Data>
typename Storage<Data>::iterator Storage<Data>::end()
{
    return iterator{ d_storage.end() };
}
