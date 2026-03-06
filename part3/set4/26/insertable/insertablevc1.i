    // by 

template<template <typename> class Container, typename Type>
Insertable<Container, Type>::Insertable(Container<Type> const &value)
:
    Container<Type>(value)
{}
