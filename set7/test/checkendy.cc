#include <iostream>

using namespace std;

int main()
{
    unsigned int x = 1;
    char *c = (char*)&x;
    if (*c)
        std::cout << "Little-endian\n";
    else
        std::cout << "Big-endian\n";
}
