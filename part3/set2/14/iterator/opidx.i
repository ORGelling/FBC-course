    // by 

template <typename Data>
Data &Storage<Data>::iterator::operator[](size_t idx)
{
    return **(d_current + idx);
}
