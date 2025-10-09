#ifndef INCLUDED_DATA_IMPLEMENTATION_
#define INCLUDED_DATA_IMPLEMENTATION_

#include <string>

class DataImp
{
    std::string d_text;
    int d_value = 0;

    public:
        bool read();
        void display() const; 
};
        
#endif
