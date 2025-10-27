#include <fstream>
#include <iostream>
using namespace std;

void hello(ostream &out)
{
    out << "hello world\n";
}

int main()
{
    ofstream out1{ "/tmp/out1" };
    if (out1.is_open())
        cout << "opened out1\n";
    hello(out1);

    fstream out2{ "/tmp/out2", ios::out };
    if (out2.is_open())
        cout << "opened out2\n";
    hello(out2);
}
