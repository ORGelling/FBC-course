#include "demo/demo.h"

using namespace std;

// HB: PH

int main()
try
{
    Demo demo{1};
}/*
^ The destructor is called here */
catch (...)                                 // 
{
    cerr << "main\n";
}
