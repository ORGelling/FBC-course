#ifndef INCLUDED_STORAGE_
#define INCLUDED_STORAGE_

#include <vector>
#include <iterator>
#include <compare>

                                            // the constraint
template <typename Iter>
concept StorageIterator = 
    requires
    {
        typename Iter::storage_iterator_tag; 
    };

                                            // which is applied to free ops:
template <StorageIterator Iter>
bool operator==(Iter const &lhs, Iter const &rhs);

template <StorageIterator Iter>
std::strong_ordering operator<=>(Iter const &lhs, Iter const &rhs);

template <StorageIterator Iter>
typename Iter::difference_type operator-(Iter const &lhs, Iter const &rhs);

template <StorageIterator Iter>
Iter operator-(Iter const &lhs, typename Iter::difference_type offset);

template <StorageIterator Iter>
typename Iter::difference_type operator+(Iter const &lhs, Iter const &rhs);

template <StorageIterator Iter>
Iter operator+(Iter const &lhs, typename Iter::difference_type offset);


template <typename Data>
class Storage
{
    std::vector<Data *> d_storage;

    public:
        class iterator
        {
            public:
                using storage_iterator_tag = void;
                using iterator_category    = std::random_access_iterator_tag;
                using iterator_concept     = std::random_access_iterator_tag;
                using difference_type      = std::ptrdiff_t;
                using value_type           = Data;
                using pointer              = value_type *;
                using reference            = value_type &;
        
            private:
                friend class Storage;
                
                friend bool operator==<>(iterator const &lhs, 
                                                        iterator const &rhs);
                friend std::strong_ordering operator<=><>(
                                    iterator const &lhs, iterator const &rhs);
                friend difference_type operator-<>(iterator const &lhs, 
                                                        iterator const &rhs);
                friend iterator operator-<>(iterator const &lhs, 
                                                    difference_type offset);
                friend difference_type operator+<>(iterator const &lhs, 
                                                        iterator const &rhs);
                friend iterator operator+<>(iterator const &lhs, 
                                                    difference_type offset);
                
                                                            // the data member
                std::vector<Data *>::iterator d_current;
                
                                                            // private ctor
                explicit iterator(std::vector<Data *>::iterator it);
            

            public:
                reference operator*() const;
                pointer operator->() const;
                reference operator[](difference_type offset) const;
                iterator &operator++();
                iterator operator++(int);
                iterator &operator--();
                iterator operator--(int);
                iterator &operator+=(difference_type offset);
                iterator &operator-=(difference_type offset);
        };                                      // nested iterator class end
        
        using reverse_iterator = std::reverse_iterator<iterator>;

        ~Storage();
        
        void push_back(Data *ptr);
        iterator begin();
        iterator end();
        reverse_iterator rbegin();
        reverse_iterator rend();
};

// iterator's friends
#include "opequals.i"
#include "opcompare.i"
#include "opsub.i"
#include "opsubstep.i"
#include "opadd.i"
#include "opaddstep.i"

// iterator's ctor
#include "iterator1.i"

// iterator's public members
#include "opderef.i"
#include "oparrow.i"
#include "opidx.i"
#include "opincr.i"
#include "oppostincr.i"
#include "opdecr.i"
#include "oppostdecr.i"
#include "opaddis.i"
#include "opsubis.i"

// Storage's dtor
#include "destructor.i"

// Storage's members
#include "push_back.i"
#include "begin.i"
#include "end.i"
#include "rbegin.i"
#include "rend.i"

#endif
