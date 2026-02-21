    // by 

template <typename Type>
Unique<Type>::Unique(Unique &&other)
:
    d_data(std::move(other.d_data))
{
    ++s_count;
    ++s_actual;                     // dtor manages this, stealing resources 
}                                   // doesn't destroy the object yet. It is
                                    // thus still technically a sound object
