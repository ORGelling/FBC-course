template <typename Data>
inline Storage<Data>::reverse_iterator Storage<Data>::rbegin()
{
    return reverse_iterator{ iterator{ d_storage.end() } };
}
