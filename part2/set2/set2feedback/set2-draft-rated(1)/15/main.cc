#include "main.ih"

int main()
try
{
    TempFile temp;
    
    throw 1;
    
    exit(1);
    //char stall;
    //cin >> stall;
}
catch (int err)
{
    cerr << "Error caught of value: " << err << '\n';
}
