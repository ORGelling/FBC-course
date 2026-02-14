#include "main.ih"

void funTwo(Demo &&dem1, Demo &&dem2)
{
    cout << "fun(" << dem1.name() << ", " << dem2.name() << ")\n";
}
