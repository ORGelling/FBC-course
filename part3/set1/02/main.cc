#include "main.ih"

int main()
{
    int chVal = 'X';
    
    cout << chVal << '\n'
         << as<char>(chVal) << '\n'
         << as<bool>(chVal) << '\n';
}
