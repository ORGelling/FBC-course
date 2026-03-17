#include <concepts>

template <typename Data, template <typename> class Container>
concept CheckOpIdx =
    requires(Container<Data> container)
    {
        { container[0] } -> std::same_as<Data &>;
    };                          
                                    // This might be slightly type unsafe for
                                    // custom containers, one can also use 
                                    // the container's ::value_type
