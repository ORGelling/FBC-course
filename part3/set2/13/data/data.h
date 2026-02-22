#ifndef INCLUDED_DATA_
#define INCLUDED_DATA_

#include <vector>
#include <string>

class Data
{
    using DataVector = std::vector<std::shared_ptr<std::string>>;

    DataVector d_data;
    
    public:
        Data();
        
        void push_back();
};
        
#endif
