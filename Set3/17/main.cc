#include "main.ih"
#include "sum.h"

int main(int const argc, char const *argv[])
{
    if (findDouble(argc, argv))
        cout << sum(argc, argv, "Doubles") << '\n';
    else
        cout << sum(argc, argv) << '\n';
}
