#ifndef INCLUDED_STORAGE_
#define INCLUDED_STORAGE_

#include <vector>

template <typename Data>
class Storage
{
    std::vector<Data *> d_storage;
    
    public:
        class iterator;
        using reverse_iterator = std::reverse_iterator<iterator>;
        
        using value_type = Data;
        
        ~Storage();
        
        void push_back(Data const &entry);
        
        size_t size() const;

        iterator begin();
        iterator end();
        reverse_iterator rbegin();
        reverse_iterator rend();
        
        std::vector<Data *> &data();        // for testing contents
};

#include "destructor.i"
#include "push_back.i"
#include "size.i"
#include "begin.i"
#include "rbegin.i"
#include "end.i"
#include "rend.i"

#include "data.i"

#endif
