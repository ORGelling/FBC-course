#ifndef INCLUDED_DEMO_
#define INCLUDED_DEMO_

#include <iostream>

class Demo
{
    public:
        Demo() = default;
        Demo(int number);
        ~Demo();

    private:
};

inline Demo::Demo(int number)
try
:                                           // We delegate to default ctor
    Demo()                                  // so we have a constructed
{                                           // object for the dtor to run on
    std::cerr << "Constructor running for: " << number << '\n';
    throw number;                           // even if this throws
}
catch (...)
{    
    std::cerr << "Catching exception\n";
}                                   

inline Demo::~Demo()
{
    std::cerr << "Destructor running\n";
}
        
#endif
