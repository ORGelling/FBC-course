#ifndef INCLUDED_INSERTABLE_
#define INCLUDED_INSERTABLE_

#include <iosfwd>
#include <utility>  //for forward

template <template <typename> class Container, typename Type>
struct Insertable: public Container<Type>
{
    Insertable() = default;
    Insertable(Insertable const &other) = default;
    Insertable(Insertable &&other) = default;
    
    Insertable(Container<Type> const &value);
    Insertable(Container<Type> &&value);
    Insertable(Type const &Value);
    Insertable(Type &&vallue);
    
                                                // Instead of all of this we 
                                                // can leave the interface 
                                                // empty except for:
    using Container<Type>::Container;
                                                // which covers almost all
                                                // of the needed cases. Fails
                                                // for IVector iv3(4) though
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
