    // by 

template <typename Data>
Data &Storage<Data>::iterator::operator*()
{
    return **d_current;
}
