#include "multi.ih"

    // by 

Multi::Multi()
:
    Basic(/*42*/)           // any int, really. Would be fitting to 
{                       // have a Multi(int number) ctor to match
    std::cout << static_cast<Basic *>(this) << '\n';
}
