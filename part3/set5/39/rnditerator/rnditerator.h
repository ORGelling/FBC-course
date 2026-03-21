#ifndef INCLUDED_RNDITERATOR_H
#define INCLUDED_RNDITERATOR_H

#include <concepts>
#include <cstddef>              // for size_t

// Ignoring that <iterator> comes with a random_access_iterator 
// concept that does quite literally *all* of this already:

                                            // comparable:
    // std::totally_ordered

                                            // steppable
template <typename Type>
concept Steppable = 
    requires(Type tp, size_t step)
    {
        { tp + step } -> std::same_as<Type>;
        { tp - step } -> std::same_as<Type>;
        { tp += step } -> std::same_as<Type &>;
        { tp -= step } -> std::same_as<Type &>;
    };

                                            // incrementable
template <typename Type>
concept Incrementable = 
    requires(Type tp)
    {
        { ++tp } -> std::same_as<Type &>;
        { tp++ } -> std::same_as<Type>;
    };

                                            // decrementable
template <typename Type>
concept Decrementable = 
    requires(Type tp)
    {
        { --tp } -> std::same_as<Type &>;
        { tp-- } -> std::same_as<Type>;
    };


                                            // dereferencable
template <typename Type>
concept Dereferencable =
    requires(Type tp)
    {
        { *tp } -> std::same_as<typename Type::value_type &>;
    };                              // might need convertible_to instead?

                                            // const dereferencable
template <typename Type>
concept ConstDereferencable =
    requires(Type tp)
    {
        { *tp } -> std::convertible_to<typename Type::value_type const &>;
    };

                                            // input iterator
template <typename Type>
concept InIterator = 
    std::totally_ordered<Type>      // Comparable
    && Incrementable<Type>
    && ConstDereferencable<Type>;

                                            // output iterator
template <typename Type>
concept OutIterator = 
    std::totally_ordered<Type>      // Comparable
    && Incrementable<Type>
    && Dereferencable<Type>;

                                            // forward iterator
template <typename Type>
concept FwdIterator = 
    InIterator<Type>
    && OutIterator<Type>;

                                            // bidirectional iterator
template <typename Type>
concept BidirectionalIterator = 
    Decrementable<Type>
    && FwdIterator<Type>;

                                            // random access iterator
template <typename Type>
concept RndIterator = 
    Steppable<Type>
    && BidirectionalIterator<Type>;


#endif
