template <typename Data>
Storage<Data>::iterator::iterator(std::vector<Data *>::iterator it)
:
    d_current(it)
{}
