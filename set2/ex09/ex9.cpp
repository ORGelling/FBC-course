#include <iostream>

using namespace std;

int main() {
    char c;
    int char_a {0}, char_e {0}, char_i = {0};

    while (cin.get(c)) {
        if (c == 'a' || c == 'A')
            char_a+=1;
        else if (c == 'e' || c == 'E')
            char_e++;
        else if (c == 'i' || c == 'I')
            char_i++;
    }

    cout << "# a-chars: " << char_a
         << ", # e-chars: " << char_e
         << ", # i-chars: " << char_i
         << '\n';

    return 0;
}

