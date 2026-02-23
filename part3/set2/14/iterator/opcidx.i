    // by 

template <typename Data>
Data const &Storage<Data>::iterator::operator[](size_t idx) const
{
    return **(d_current + idx);
}
