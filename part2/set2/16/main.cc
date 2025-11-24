#include "main.ih"

int main(int argc, char **argv)
try
{
    Strings strings(argc, argv);
    strings.show();
}
catch (bad_alloc const &memFault)       // single big handleException()
{                                       // function would be prettier
    cerr << "Strings: " << memFault.what() << '\n';
}
catch (int value)
{
    cerr << "Basic error value: " << value << '\n';
}
