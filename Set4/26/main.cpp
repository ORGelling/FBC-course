#include "Person.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    Person person("John Doe", "123 Main St", "5551234", 70);
    person.insert(cout);
    person.extract(cin);
    person.insert(cout);
    return 0;
}
