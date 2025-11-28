#include <iostream>

using namespace std;

int main()
{
    for (unsigned char idx = 0; idx != 255; ++idx)
        cout << static_cast<size_t>(idx) << ": " << idx << '\n';
}
