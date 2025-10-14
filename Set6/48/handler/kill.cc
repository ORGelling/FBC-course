#include "handler.h"

    // by

int Handler::kill()
{
    // use static bool kill(int id)
    // get use id from argv?
    if (kill(stoi(argv[2])))
        cout << "killed memory segment: " << argv[2] << '\n';
    else
        cout << "murder failed\n";
}
