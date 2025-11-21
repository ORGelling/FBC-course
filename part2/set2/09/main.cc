#include "demo/demo.h"

using namespace std;

int main()
try
{
    Demo demo{1};
}/*
^ The destructor is called here */
catch (...)                                 // none of this even runs
{
    cerr << "main\n";
}
