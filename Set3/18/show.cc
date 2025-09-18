#include "main.ih"

void show(ReturnValues showStruct)
{
    cout << "Argument number: " << showStruct.nr 
        << " Value: " << showStruct.value << '\n';
}
