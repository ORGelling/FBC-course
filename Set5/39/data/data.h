#ifndef INCLUDED_DATA_
#define INCLUDED_DATA_

#include <string>

class Data
{
//    std::string d_text;
    int d_value = 0;

    public:
        bool read();
        void display() const; 
};
        
#endif
