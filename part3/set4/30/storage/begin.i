template <typename Data>
inline Storage<Data>::iterator Storage<Data>::begin()
{
    return iterator{ d_storage.begin() };
}
