#include "handler.ih"

    // by 

int Handler::run()
{
    string cmd = d_argv[0];
    
    if (cmd == "i" && specified(1))                 // add specified();
        return initialize();
    if (cmd == "c" && specified(2))
        return confirmConnect();
    if (cmd == "e" && specified(3))
        return element();
    if (cmd == "f" && specified(3))
        return fill();
    if (cmd == "k" && specified(2))
        return kill();
    if (cmd == "s" && specified(2))
        return sum();

    cout << "Unknown command '" << cmd << "'\n";
    return 1;
}
