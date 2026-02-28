    // by 

template <typename Type>
Simple<Type *>::Simple(Type *value)
:
    d_value(new Type(*value))           // we allocate here to avoid illegal
{}                                      // free-ing of stack rsources in dtor 
