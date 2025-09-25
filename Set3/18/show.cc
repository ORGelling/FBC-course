#include "combine.ih"

void show(ReturnValues const &showStruct)
{
    cout << "Argument number: " << showStruct.nr 
        << " Argument value: " << showStruct.value << '\n';
}
