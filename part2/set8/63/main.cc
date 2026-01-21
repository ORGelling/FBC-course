#include "main.ih"

int main(int argc, char **argv)
try
{
    Options::initialise(argc, argv);
    MultiCompile mc;
    //mc.run();
}
catch (...)
{
    return handleExceptions();
}
