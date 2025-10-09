#include <iostream>

using namespace std;

int main()
{
    double arr[10][8];
    arr[0][0] = 0.1;
    double (*ptr)[8] = arr;
    
    cout << arr[0] << " " << *ptr << '\n';
}
