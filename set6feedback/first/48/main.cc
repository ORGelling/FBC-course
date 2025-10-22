//JB: 1
//JB: Very cursorily scanned this, and it looks ok, but have got no more time.
//JB: You can compare to our solution when it's published.
//JB; Will look better if you have specific questions.
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
