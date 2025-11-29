#include "strings/strings.h"
#include <iostream>

using namespace std;

int main()
{
    size_t count = 4;
    Strings test(count, "testing"s);
    
    cout << test << '\n';
}
