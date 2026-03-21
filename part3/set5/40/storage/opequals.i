template <StorageIterator Iter>
inline bool operator==(Iter const &lhs, Iter const &rhs)
{
    return lhs.d_current == rhs.d_current;
}
