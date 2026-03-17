template <typename Data>
inline Storage<Data>::reverse_iterator Storage<Data>::rend()
{
    return reverse_iterator{ iterator{ d_storage.begin() } };
}
