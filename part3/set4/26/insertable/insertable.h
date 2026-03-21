#ifndef INCLUDED_INSERTABLE_
#define INCLUDED_INSERTABLE_

#include <iosfwd>
#include <utility>  //for move

template <template <typename> class Container, typename Type>
struct Insertable: public Container<Type>
{
    using Container<Type>::Container;       // This seems to already account
                                            // for these default ctor decls?
    Insertable() = default;
    Insertable(Insertable const &other) = default;
    Insertable(Insertable &&other) = default;
    
    Insertable(Container<Type> const &value);       // 1.i
    Insertable(Container<Type> &&value);            // 2.i
    Insertable(Type const &element);                // 3.i
    Insertable(Type &&element);                     // 4.i
};

template<template <typename> class Container, typename Type>
std::ostream &operator<<(std::ostream &out, 
                                    Insertable<Container, Type> const &ins);

#include "insertablevc1.i"
#include "insertablevc2.i"
#include "insertablevc3.i"
#include "insertablevc4.i"
#include "opinsert.i"

#endif
