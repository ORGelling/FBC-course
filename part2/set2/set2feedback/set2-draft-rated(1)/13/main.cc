#include "main.ih"

int main()
try
{
    [[maybe_unused]] MaxFour *tenObjects = new MaxFour[10];
    //MaxFour tenObjects[10];
}
catch (exception const &exc)
{
    cerr << "Catching exception: " << exc.what() << '\n';
}
