//JB: ?
#include "main.ih"

int main(int const argc, char const *argv[])
{
    bool findDouble = false; //JB: COC/MLR
    for (int argIdx = 1; argIdx != argc; ++argIdx)
    {
        string const argument = argv[argIdx];
        if (argument.find(".") != string::npos)
        {
            findDouble = true;
            break;                              // One double is enough
        }
    }
    
    if (findDouble)
        cout << sum(argc, argv, "Doubles") << '\n';
    else
        cout << sum(argc, argv) << '\n';
}
