#include "testfunc/testfunc.h"
#include <iostream>

using namespace std;

int main()
{
    int const value = 3;
    int const *ptr = &value;
    
    useDeref(ptr);
    useDeref2(ptr);
    
    [[maybe_unused]] TestClass1<int const *> test1{ ptr };
    [[maybe_unused]] TestClass2<int const *> test2{ ptr };
}
