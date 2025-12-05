#include "main.ih"

int main()
try
{
    Base **bp = derivedFactory(10);
    
    bp[2]->hello(cout);                     // testing contents
    
    derivedDeleter(bp, 10); 
}
catch (...)
{}
