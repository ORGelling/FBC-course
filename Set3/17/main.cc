#include "ex17.ih"

int main(int argc, char const *argv[])
{
    string argList;
    for (int argIdx = 1; argIdx != argc; ++argIdx)
    {
        //argList += (argList.empty() ? "" : ", ") + 
        cout << argv[argIdx] << '\n';
    }
    cout << argList << '\n';
    
    int intSum = sum(argc, argv, { 5, 8, 3, 6, 12, 182 });
    double doubleSum = sum(argc, argv, { 8.37, 3.332, 8.0008, 15.1515 });
    
    cout << "ints: " << intSum << "\ndoubles: " << doubleSum << '\n';
}
