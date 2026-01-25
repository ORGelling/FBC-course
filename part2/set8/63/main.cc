#include "main.ih"

int main(int argc, char **argv)
try
{
    Options::initialise(argc, argv);
    
    // can put h flag check here? Currently in setOptions.cc
    
    MultiCompile mc;
    mc.run();
        
}
catch (...)
{
    return handleExceptions();
}
