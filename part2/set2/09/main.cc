#include "demo/demo.h"

using namespace std;

int main()
try
{
    Demo demo{1};
}
catch (...)                                 // 
{
    cerr << "exception now in main\n";
}
