#include "main.ih"

int main(int argc, char **argv)     
try     
{     
    Arg const &arg = Arg::initialise("ace:fg:h", argc, argv);           // 1
                                    // using my own arg class from ex 64.
    Process process{ arg };                                             // 2

    process.run();                                                      // 3
}
catch (...)
{
    return handleException();
}
