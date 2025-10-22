#include "main.ih"

int main(int argc, char **argv)
{
    if (argc == 1)              // no args: show usage and stop.
    {
        usage(argv[0]);
        return 1;
    }

    Handler handler( argc, argv );  // define the handler
    return handler.run();           // perform the requested action
}
