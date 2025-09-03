#include <iostream>

using namespace std;

int main ()
{
    size_t value;

    cin >> value;

    // Simple modulo 2. 0 should give false and any nonzero value true
    cout << (value % 2 ? "odd" : "even") << '\n';
    
    // bitwise AND to select the LSB. 1/true for odd, 0/false for even
    cout << (value & 1 ? "odd" : "even") << '\n';
    
    // bitshift right and then left to see if the LSB goes from 1 to 0.
    cout << ((value >> 1) << 1 != value ? "odd" : "even") << '\n';
    
    // divide and multiply by 2 to see if uneven numbers lose their .5
    cout << ((value / 2) * 2 != value ? "odd" : "even") << '\n';
    
    // Still have bitwise xor (^) and or (|), and addition and subtraction
    cout << (value ^ 1 ? "odd" : "even") << '\n';
}
