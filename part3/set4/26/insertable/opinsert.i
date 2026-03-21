    // by 

template <template <typename> class Container, typename Type>
std::ostream &operator<<(std::ostream &out, 
                                    Insertable<Container, Type> const &ins)
{                                  
    for (Type const &element : ins)     // using auto might be cleaner here?
        out << element << '\n';
        
    return out;
}
