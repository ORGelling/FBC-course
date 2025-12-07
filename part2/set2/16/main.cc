#include "main.ih"

int main(int argc, char **argv)
try
{
    Strings strings(argc, argv);
    strings.show();
}
catch (...)
{
    return handleExceptions();
}
