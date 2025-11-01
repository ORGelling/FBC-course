#include "strings/strings.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    size_t argc_t = argc;
    Strings one(argc_t, argv);
    
    Strings two(cin);
    
    //Strings C(Strings(argc_t, argv));     // elided away
    //Strings C(Strings(move(B)));          // Works!

    Strings three;
    
    //C = B;
    three = move(two);
    
    for (size_t idx = 0, end = one.size(); idx != end; ++idx)
        cout << "line " << idx + 1 << ": " << one.at(idx) << '\n';

    cout << "current capacity: " << one.capacity() << '\n';
    
    for (size_t idx = 0, end = two.size(); idx != end; ++idx)
        cout << "line " << idx + 1 << ": " << two.at(idx) << '\n';

    cout << "current capacity: " << two.capacity() << '\n';
    
    for (size_t idx = 0, end = three.size(); idx != end; ++idx)
        cout << "line " << idx + 1 << ": " << three.at(idx) << '\n';

    cout << "current capacity: " << three.capacity() << '\n';
}
