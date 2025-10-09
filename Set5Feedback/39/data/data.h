// ES: 1
#ifndef INCLUDED_DATA_
#define INCLUDED_DATA_

#include <string>

class DataImp;      // Forward declaration so no need to recompile main

class Data
{
    DataImp *d_pimpl;
    
    public:
        Data();
        ~Data();
    
        bool read();
        void display() const; 
};

#endif
