#ifndef INCLUDED_ITERATOR_
#define INCLUDED_ITERATOR_

#include <iterator>
#include <compare>
                                            // Macro for simplification
#define ItType Iterator<IData, Container>


template <typename IData, template <typename> class Container>
class Iterator;

template <typename IData, template<typename> class Container>
bool operator==(ItType const &lhs, ItType const &rhs);

template <typename IData, template<typename> class Container>
std::strong_ordering operator<=>(ItType const &lhs, ItType const &rhs);

template <typename IData, template<typename> class Container>
typename Container<IData *>::difference_type operator-(ItType const &lhs, 
                                                        ItType const &rhs);


template <typename IData, template <typename> class Container>
class Iterator
{                                       // initial section for further use
    public:                             // by private mems & friend decls
        using iterator_category = std::random_access_iterator_tag;
        using difference_type = typename Container<IData *>::difference_type;
        using value_type        = IData;
        using pointer           = value_type *;
        using reference         = value_type &;
                                        
                                        // Can just place these here
        friend bool operator==<>(Iterator const &lhs, Iterator const &rhs);
        friend std::strong_ordering operator<=><>(
                                Iterator const &lhs, Iterator const &rhs);
        friend difference_type operator-<>(
                                Iterator const &lhs, Iterator const &rhs);

    private:
        typename Container<IData *>::iterator d_current;  // the data member
    
    public:
        Iterator(typename Container<IData *>::iterator const &current);
        
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
