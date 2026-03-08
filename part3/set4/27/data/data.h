#ifndef INCLUDED_DATA_
#define INCLUDED_DATA_

#include "../datatraits/datatraits.h" 

#include <vector>

class Data
{
    std::vector<std::string> d_data;
    
    public:
        Data() = default;
        Data(std::initializer_list<std::string> const &list);
        
        template <typename Type>
        decltype(auto) get(size_t idx) const;
};

#include "get.i"
        
#endif
