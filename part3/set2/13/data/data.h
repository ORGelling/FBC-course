#ifndef INCLUDED_DATA_
#define INCLUDED_DATA_

#include <vector>
#include <memory>       // shared_ptr
#include <string>

class Data
{
    using DataVector = std::vector<std::shared_ptr<std::string>>;

    DataVector d_data;
    
    public:
        using value_type = std::string;
        
        void push_back(std::string const &entry);
        
        DataVector &data();
};

//:

inline void Data::push_back(std::string const &entry)
{
    d_data.push_back(std::make_shared<std::string>(entry));
}

inline Data::DataVector &Data::data()
{
    return d_data;
}

#endif
