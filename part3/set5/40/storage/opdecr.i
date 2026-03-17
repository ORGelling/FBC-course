template <typename Data>
typename Storage<Data>::iterator &Storage<Data>::iterator::operator--()
{
    --d_current;
    return *this;
}
