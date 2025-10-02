// HB: please don't include a main.cc: we didn't ask for one

#include "person/person.h"
#include <iostream>
#include <string>

using namespace std;
// HB: PH

int main()
{
    Person frank
    { 
        "Frank Brokken", 
        "Groningen", 
        "0612345678", 
        65 
    };
    
    frank.insert(cout);

    Person jurjen;
    
    jurjen.extract(cin);
    
    jurjen.insert(cout);
}
