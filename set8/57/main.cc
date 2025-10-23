#include "strings/strings.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    size_t argc_t = argc;
    Strings A(argc_t, argv);
    
    Strings B(cin);
    
    //Strings C(Strings(argc_t, argv));     // elided away
    //Strings C(Strings(move(B)));          // Works!

    Strings C;
    
    //C = B;
    C = move(B);
    
    for (size_t idx = 0, end = A.size(); idx != end; ++idx)
        cout << "line " << idx + 1 << ": " << A.at(idx) << '\n';

    cout << "current capacity: " << A.capacity() << '\n';
    
    for (size_t idx = 0, end = B.size(); idx != end; ++idx)
        cout << "line " << idx + 1 << ": " << B.at(idx) << '\n';

    cout << "current capacity: " << B.capacity() << '\n';
    
    for (size_t idx = 0, end = C.size(); idx != end; ++idx)
        cout << "line " << idx + 1 << ": " << C.at(idx) << '\n';

    cout << "current capacity: " << C.capacity() << '\n';
}
