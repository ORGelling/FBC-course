#include "Line.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    Line line;
    line.getLine();

    std::string substring;
    do
    {
        substring = line.next();
        cout << substring << '\n';
    } while (!substring.empty());
}
