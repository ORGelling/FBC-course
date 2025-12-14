#include "string/string.h"
#include <iostream>

using namespace std;

int main()
{
    String test1("a");
    String test2("b");
    String test3("Starting here");
    
    cout << std::boolalpha << (test1 <= test2) << '\n'
        << test3.string::insert(3, 6, 'q') << '\n'  // uses std::string's ins.
        << ("b"s == test2) << '\n'                  // uses std::string's c.o.
        << (static_cast<string>(test1) <= test2) << '\n';
}
