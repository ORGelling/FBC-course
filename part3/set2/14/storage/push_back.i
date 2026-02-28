    // by 

template <typename Data>
void Storage<Data>::push_back(Data const &entry)
{
    d_storage.push_back(new Data{ entry });
}
