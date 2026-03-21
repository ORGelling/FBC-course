    // by 

template<template <typename> class Container, typename Type>
Insertable<Container, Type>::Insertable(Type const &element)
:
    Container<Type>(1, element)
{}
