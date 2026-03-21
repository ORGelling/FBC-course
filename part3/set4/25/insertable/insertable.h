#ifndef INCLUDED_INSERTABLE_
#define INCLUDED_INSERTABLE_

#include <iosfwd>
#include <utility>  //for forward

template <template <typename> class Container, typename Type>
struct Insertable: public Container<Type>
{
    using Container<Type>::Container;           // this covers for a lot of 
                                                // other functions. Can leave
                                                // a few of the following 
                                                // ctors out technically
    Insertable() = default;
    Insertable(Insertable const &other) = default;
    Insertable(Insertable &&other) = default;
    
    Insertable(Container<Type> const &value);
    Insertable(Container<Type> &&value);
    Insertable(Type const &element);
    Insertable(Type &&element);
};

template<template <typename> class Container, typename Type>
std::ostream &operator<<(std::ostream &out, 
                                    Insertable<Container, Type> const &ins);

/*
#include "insertablevc1.i"
#include "insertablevc2.i"
#include "insertablevc3.i"
#include "insertablevc4.i"
#include "opinsert.i"
*/

#endif
