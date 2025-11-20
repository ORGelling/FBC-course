#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    cout << ++argv[0] << '\n';
    cout << argv[0] << '\n';
    
    cout << ++*argv << '\n';
    cout << *argv << '\n';

    //int x[8];
    
    //cout << &x[10] - &x[3] << '\n';
}
