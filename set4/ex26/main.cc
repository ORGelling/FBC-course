#include "person/person.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    Person frank{ "Frank Brokken", "Groningen", "0612345678", 65 };
    frank.insert(cout);                 // prints a single CSV line

    Person jurjen;                      // uses default ctor
    jurjen.extract(cin);                // expects: name,address,phone,mass\n
    jurjen.insert(cout);
}

