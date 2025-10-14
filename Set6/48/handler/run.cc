#include "handler.ih"

    // by 

int Handler::run()
{
    string cmd = d_argv[0];
    
    if (cmd == "i")                 // add specified();
        return initialize();
    if (cmd == "c")
        return confirmConnect();
    if (cmd == "e")
        return element();
    if (cmd == "f")
        return fill();
    if (cmd == "k")
        return kill();
    if (cmd == "s")
        return sum();

    cout << "Unknown command: '" << cmd << "'\n";
    return 1;
}
