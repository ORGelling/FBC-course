#include "main.ih"

int main()
{
    Base bOne;
    Base bTwo{ bOne };
    Base bThree(move(bTwo));
    cerr << '\n';
    Derived one;
    Derived two{ one };
    Derived three(move(two));
    cerr << '\n';
}
