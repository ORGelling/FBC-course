#include "main.ih"

void fun(Demo &&first, Demo &&second)
{
    cout << "fun(" << first.name() << ", " << second.name() << ")\n";
}
