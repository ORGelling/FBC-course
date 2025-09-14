#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;                  

    size_t sum = 0;
    for (char ch : s) {
            sum += (ch - '0');
    }

    while (sum >= 10) {
        size_t next = 0;
        while (sum > 0) {
            next += sum % 10;
            sum /= 10;
        }
        sum = next;
    }

    bool divisible = (sum == 0 || sum == 3 || sum == 6 || sum == 9);

    cout << (divisible ? "divisible by 3" : "not divisible by 3") << '\n';
}

