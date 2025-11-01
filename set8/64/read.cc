#include "main.ih"

int read(string const &filename)
{
    ifstream read{ filename };

    if (not read.is_open())
        return 1;

    string temp;
    while(getline(read, temp))
        cout << temp << '\n';

    return 0;
}
