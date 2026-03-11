template <typename Tuple, int nr, typename ...AddParams>
auto add_impl(Tuple const &tuple, Nr<nr>, AddParams &&...addParams)
{                                       // we recurse to unpack the tuple's
    return add_impl(                    //  elements into a param pack
        tuple,                                  
        Nr<nr - 1>{},                           // tracks element to unpack
        get<nr - 1>(tuple),                     // adds next elem to P.P.
        std::forward<AddParams>(addParams)...
    );
}

template<typename Tuple, typename... AddParams>
auto add_impl(Tuple const &tuple, Nr<0>, AddParams &&...addParams)
{
    return std::make_tuple(std::forward<AddParams>(addParams)...);
}                                               // makes a new tuple with old
                                                // tuple and added elements
template <typename Tuple>
template <typename ...AddParams>
auto TupleMod<Tuple>::add(AddParams &&...addParams)
{
    return add_impl(                            // we call the implementation
        d_tuple,                                // handing it the tuple ref,
        Nr<std::tuple_size<Tuple>::value>{},    // its size,
        std::forward<AddParams>(addParams)...   // and the params to add
    );
}
