template <typename Data>
inline Storage<Data>::iterator Storage<Data>::end()
{
    return iterator{ d_storage.end() };
}
