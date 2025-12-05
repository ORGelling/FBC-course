#include "strings/strings.h"
#include <iostream>

using namespace std;

int main()
{
    Strings test(6, "testing "s);
    
    Strings test2("lalalalala");
    
    cout << test << '\n' << test + test2 << '\n';
}
