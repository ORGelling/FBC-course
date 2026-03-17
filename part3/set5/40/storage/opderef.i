template <typename Data>
Data &Storage<Data>::iterator::operator*() const
{
    return **d_current;
}
