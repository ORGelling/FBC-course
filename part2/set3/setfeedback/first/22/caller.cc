#include "main.ih"

void caller(Base &obj)
{
    //using static cast
    obj.hello();
    static_cast<Derived>(obj).hello();
    
    //using assignment
    Derived derived;
    derived = obj;
    derived.hello();
}
