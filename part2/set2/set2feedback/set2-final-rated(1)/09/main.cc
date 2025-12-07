// HB: rating: 1

#include "demo/demo.h"

using namespace std;

// HB: PH

int main()
try
{
    Demo demo{1};
}
catch (...)                                 // 
{
    cerr << "exception now in main\n";
}
