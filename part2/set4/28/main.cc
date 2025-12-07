#include "main.ih"

using namespace std;

int main()
{
    RandBuffer rand(-1000, 1000, 12);
    istream in(&rand);
    
    int store;
    
    for (size_t idx = 0; idx != 25; ++idx)
    {
        in >> store;
        cout << store << '\n';
    }
}
