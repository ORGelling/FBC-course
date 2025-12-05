#include "main.ih"

int main()
{
    Base base;
    Derived derived{ "text for derived object"s };
    Message msg1;
    Message msg2;
    
    base.show();
    derived.show();
}
