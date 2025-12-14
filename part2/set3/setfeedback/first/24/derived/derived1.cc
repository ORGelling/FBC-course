#include "derived.ih"

    // by 

Derived::Derived(string const &name)
:                                       // these flags aren't essential
    ofstream(name, ios::in | ios::out | ios::app),  
    Base(static_cast<ostream &>(*this))         // Base takes ostream
{
    //cerr << "calling derived ctor\n";           // debug msg
}
