#include "main.ih"

int main(int argc, char **argv)
try
{
    Options::initialise(argc, argv);
    MultiCompile mc;
    
    cout << Options::instance().mode() << " \"" 
        << Options::instance().source() << "\"\n";
    //mc.run();
}
catch (...)
{
    return handleExceptions();
}
