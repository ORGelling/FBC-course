#include "main.ih"

int main()
{
    cout <<
        Type<int>::located << ' ' << 
        Type<int, double>::located << ' ' << 
        Type<int, int>::located << ' ' << 
        Type<int, double, int>::located << ' ' << 
        Type<int, double, int>::located << ' ' << 
        Type<int, double, int, int, int>::located <<  ' ' <<
        Type<int, double, double, char, long, double>::located <<  ' ' <<
        Type<int, double, long, char, double, int>::located <<
        '\n';
}
