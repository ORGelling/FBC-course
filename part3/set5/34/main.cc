#include "testfunc/testfunc.h"
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector<int> intVec{ 42, 1, 2, 3, 4, 5 };
    
    cout << TestFunc(intVec) << '\n';
}
