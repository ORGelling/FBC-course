#ifndef INCLUDED_ITERATOR_
#define INCLUDED_ITERATOR_

#include "../storage/storage.h"
#include <iterator>
#include <compare>
#include <vector>

template <typename Data>
class Storage<Data>::iterator
{
    friend class Storage<Data>;
    
    std::vector<Data *>::iterator d_current;    // could have used Data **
                                                // but vector is handy here
    
    iterator(std::vector<Data *>::iterator it); // basic ctor
    
    public:
        using iterator_category = std::random_access_iterator_tag;
        using difference_type   = std::ptrdiff_t;
        using value_type        = Data;
        using pointer           = value_type *;
        using reference         = value_type &;
        
        iterator(iterator const &other);
        
        iterator &operator=(iterator const &other);
        
        Data &operator*() const;
        //Data const &operator*() const;
        
        Data *operator->() const;
        //Data const *operator->() const;
        
        Data &operator[](size_t idx);
        
        iterator &operator++();
        iterator &operator--();     // we are skipping postfix in/decrement!
        
        bool operator==(iterator const &rhv) const;
        std::strong_ordering operator<=>(iterator const rhv) const;
        int operator-(iterator const &rhv) const;
        iterator operator+(int step) const;
        iterator operator-(int step) const;
};

#include "iterator1.i"
#include "iteratorcc.i"
#include "opass.i"
#include "opderef.i"
#include "oparrow.i"
#include "opidx.i"
#include "opincr.i"
#include "opdecr.i"
#include "opequals.i"
#include "opcompare.i"
#include "opptrsubtr.i"
#include "opadd.i"
#include "opsub.i"

#endif
