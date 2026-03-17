template <typename Data>
Storage<Data>::~Storage()
{
    for (Data *ptr : d_storage)
        delete ptr;
}
