    // by 

template<template <typename> class Container, typename Type>
Insertable<Container, Type>::Insertable(Container<Type> &&value)
:
    Container<Type>(std::move(value))
{}
