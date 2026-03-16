#include "math.h"

using namespace std;

int main()
{
    math<Add>(4, 2, 5, 6);      // shows: 6  9 10
    math<Sub>(4, 2, 5, 6);      // shows: 2 -1 -2
//    math<Add>(4, 2, "5"s, 6); // WC: constraint not satisfied.
    math<Sub>(365, 8, 12, 69);
    math<Mul>(12, 12, 420, 365);
    cout << '\n';
}
