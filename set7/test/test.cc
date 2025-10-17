#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    //cout << cin.eof() << '\n';
    cout << cin.fail() << '\n';
    
    getline(cin, str);
    cout << cin.fail() << '\n';
}
