#include "person/person.h"
#include <iostream>
#include <string>

using namespace std;

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
