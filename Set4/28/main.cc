#include "Line.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    Line line;
    line.getLine();

    std::string substring;
    while (substring = line.next(), !substring.empty())
        cout << substring << '\n';
}
