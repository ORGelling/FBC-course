#include "main.ih"

void show(ReturnValues showStruct)
{
    cout << "Argument number: " << showStruct.nr 
        << " Argument value: " << showStruct.value << '\n';
}
