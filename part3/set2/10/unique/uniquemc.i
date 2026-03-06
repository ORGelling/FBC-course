    // by 

template <typename Type>
Unique<Type>::Unique(Unique &&other)
:
    Unique<Type>()
{
    d_data = std::move(other.d_data); 
}                                   // dtor manages this, stealing resources 
                                    // doesn't destroy the object yet. It is
                                    // thus still technically a sound object
