template <StorageIterator Iter>
inline Iter operator-(Iter const &lhs, typename Iter::difference_type offset)
{
    return Iter{ lhs.d_current - offset };
}
