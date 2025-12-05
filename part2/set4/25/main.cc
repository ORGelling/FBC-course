#include "main.ih"

int main()
{
    Base base;
    Derived derived{ "This is a Derived object"s };
    Message msg1(base);
    Message msg2(derived);
    
    //base.hello(cout);
    //derived.hello(cout);
    //
    msg1.show(cout);
    msg2.show(cout);
}
