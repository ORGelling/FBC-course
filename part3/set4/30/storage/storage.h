#ifndef INCLUDED_STORAGE_
#define INCLUDED_STORAGE_

#include "../iterator/iterator.h"
#include <vector>

template <typename Data>
class Storage
{
    std::vector<Data *> d_storage;  // store the pointers to the data
                                    // std. constructors/destructor: DIY.
    public:
        using iterator = Iterator<Data, std::vector>;
        using reverse_iterator = std::reverse_iterator<iterator>;

        void push_back(Data *data);

        iterator begin();
        iterator end();
        reverse_iterator rbegin();
        reverse_iterator rend();
};

#include "push_back.i"
#include "begin.i"
#include "end.i"
#include "rbegin.i"
#include "rend.i"
        
#endif
