template <typename Data>
typename Storage<Data>::iterator &Storage<Data>::iterator::operator-=(
                                                    std::ptrdiff_t offset)
{
    d_current -= offset;
    return *this;
}
