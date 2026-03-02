#include "main.ih"

int main()
{
    cout <<
        Type2<int>::located << ' ' << 
        Type2<int, double>::located << ' ' << 
        Type2<int, int>::located << ' ' << 
        Type2<int, double, int>::located << ' ' << 
        Type2<int, double, int>::located << ' ' << 
        Type2<int, double, int, int, int>::located <<  ' ' <<
        Type2<int, double, double, char, long, double>::located <<  ' ' <<
        Type2<int, double, long, char, double, int>::located <<
        '\n';
}
