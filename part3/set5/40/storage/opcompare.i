template <StorageIterator Iter>
inline std::strong_ordering operator<=>(Iter const &lhs, Iter const &rhs)
{
    return lhs.d_current <=> rhs.d_current;
}
