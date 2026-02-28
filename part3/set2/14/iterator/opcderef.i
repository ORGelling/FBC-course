    // by 

template <typename Data>
Data const &Storage<Data>::iterator::operator*() const
{
    return **d_current;
}
