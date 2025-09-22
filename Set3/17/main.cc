#include "main.ih"

int main(int const argc, char const *argv[])
{
    bool findDouble = false;
    for (int argIdx = 1; argIdx != argc; ++argIdx)
    {
        string const argument = argv[argIdx];
        if (argument.find(".") != string::npos)
        {
            foundDouble = true;
            break;                              // One double is enough
        }
    }
    
    if (findDouble)
        cout << sum(argc, argv, "Doubles") << '\n';
    else
        cout << sum(argc, argv) << '\n';
}
