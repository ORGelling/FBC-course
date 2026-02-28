    // by 

template <typename Data>
Storage<Data>::iterator &Storage<Data>::iterator::operator++()
{
    ++d_current;
    return *this;
}
