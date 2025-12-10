#include "main.ih"

using namespace std;

int main()
{
    RandBuffer rand(0, 1000000, 20);
    istream in(&rand);
    
    int store;              // size_t?
    
    for (size_t idx = 0; idx != 200; ++idx)
    {
        in >> store;
        cout << store << '\n';
    }
}
