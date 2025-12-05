#include <iostream>
#include "numbers/numbers.h"

using namespace std;

int main()
{
    Numbers one{0, 10, -3, 8, 12, 42, 99};
    Numbers two{5, 8, 12, 17, 100, 6};
    Numbers three{1, 2, 3, 4, 5, 6};
    
    cout << "one: " << one 
        << "\ntwo: " << two 
        << "\nthree: " << three << '\n';
    
    Numbers four = two / 5;
    cout << "four: " << four << '\n';
    
    Numbers five = three / 2;
    cout << "five: " << five << '\n';
    
    four += (three / 2 + Numbers{3, 4, 5, 6, 7, 8} * 112) /= 56;
    cout << "six: " << four << '\n';
}
