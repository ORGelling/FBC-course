#include "main.ih"

int main(int const argc, char const *argv[])
{
    bool findDouble = false;
    for (int argIdx = 1; argIdx != argc; ++argIdx)
    {
        string const argument = argv[argIdx];
        if (argument.find(".") != string::npos)
        {
            findDouble = true;
            break;                              // One double is enough
        }
    }
    double sumValue = 0;
    if (findDouble)
        sumValue = sum(argc, argv, "Doubles");
    else
        sumValue = sum(argc, argv);
    
    cout << sumValue << '\n';
}
