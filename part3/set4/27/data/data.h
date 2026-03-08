#ifndef INCLUDED_DATA_
#define INCLUDED_DATA_

// 

#include <string>
#include <vector>
#include <cstddef>

// 

// struct for string
// struct for built-in
// struct for floating

class Data
{
    std::vector<std::string> d_data;
    
    public:
        Data(std::initializer_list<std::string> const &list);
        
        template <typename Type>
        decltype(auto) get<Type>(size_t idx) const;
};

#include "get.i"
        
#endif
