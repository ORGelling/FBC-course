    // by 

template<template <typename> class Container, typename Type>
Insertable<Container, Type>::Insertable(Type &&element)
:
    Container<Type>(1, std::move(element))
{}
