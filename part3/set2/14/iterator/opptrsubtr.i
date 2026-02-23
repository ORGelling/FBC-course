    // by 

template <typename Data>
int Storage<Data>::iterator::operator-(iterator const &rhs) const
{
    return d_current - rhs.d_current;
}
