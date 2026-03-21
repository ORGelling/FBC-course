template <StorageIterator Iter>
inline typename Iter::difference_type operator+(Iter const &lhs, 
                                                            Iter const &rhs)
{
    return lhs.d_current + rhs.d_current;
}
