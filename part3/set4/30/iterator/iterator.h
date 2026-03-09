#ifndef INCLUDED_ITERATOR_
#define INCLUDED_ITERATOR_

#include <iterator>
#include <compare>

#define ItType Iterator<IData, Container>


template <typename IData, template <typename> class Container>
class Iterator;

template <typename IData, template<typename> class Container>
bool operator==(ItType const &lhs, ItType const &rhs);

template <typename IData, template<typename> class Container>
std::strong_ordering operator<=>(ItType const &lhs, ItType const &rhs);

template <typename IData, template<typename> class Container>
std::ptrdiff_t operator-(ItType const &lhs, ItType const &rhs);


template <typename IData, template <typename> class Container>
class Iterator
{
    using iter = typename Container<IData *>::iterator;
    
    friend bool operator==<>(Iterator const &lhs, Iterator const &rhs);
    friend std::strong_ordering operator<=><>(Iterator const &lhs, 
                                                        Iterator const &rhs);
    friend std::ptrdiff_t operator-<>(Iterator const &lhs, 
                                                        Iterator const &rhs);
    
    iter d_current;                 // the data member
    
    public:
        using iterator_category = std::random_access_iterator_tag;
        using difference_type   = std::ptrdiff_t;
        using value_type        = IData;
        using pointer           = value_type *;
        using reference         = value_type &;
        
        Iterator(iter const &current);
        
        Iterator &operator++();
        Iterator operator++(int);
        Iterator &operator--();
        Iterator operator--(int);
        Iterator &operator+=(difference_type step);
        Iterator &operator-=(difference_type step);
        Iterator operator+(difference_type step) const;
        Iterator operator-(difference_type step) const;
        reference operator*() const;
        pointer operator->() const;
};

#include "iterator1.i"

#include "opincr.i"
#include "oppostincr.i"
#include "opdecr.i"
#include "oppostdecr.i"
#include "opaddis.i"
#include "opsubis.i"
#include "opadd.i"
#include "opsub.i"
#include "opderef.i"
#include "oparrow.i"

#include "freeopequal.i"
#include "freeopcompare.i"
#include "freeopsub.i"


#undef ItType

#endif
