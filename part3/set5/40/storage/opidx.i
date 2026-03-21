template <typename Data>
Data &Storage<Data>::iterator::operator[](std::ptrdiff_t offset) const
{
    return *d_current[offset];
}
