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
//try                                       // using function try block
{                                           // inside constructor is BAD. 
    try                                 // We use nested try/catch instead
    {
        std::cerr << "Constructor running for: " << number << '\n';
        throw number;
    }
    catch (...)                             // Catching exception here so it
    {                                       // does not leave the constructor
        std::cerr << "Catching exception\n";
    }                                   // after this catch control proceeds
}                                       // and finishes construction of demo

/*
inline Demo::Demo(int number)
try                                         // using function try block
:                                           // while making sure dtor
    Demo()                                  // is called:
{
    std::cerr << "Constructor running for: " << number << '\n';
    throw number;
} 
catch (...)
{
    std::cerr << "Catching exception\n";
}
*/

inline Demo::~Demo()
{
    std::cerr << "Destructor running\n";
}
        
#endif
