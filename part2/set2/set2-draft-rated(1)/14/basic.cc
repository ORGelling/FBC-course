#include "main.ih"

int main()
try
{
    [[maybe_unused]] char stall;
    
    TempFile temp;  //[10];
    //throw 1;                          // testing unexpected throw
    
    //TempFile moved{move(temp[9])};    // testing move ops
    //temp[7] = move(temp[8]);
    
    cin >> stall;                       // allows us to look up the files
}
catch (...)
{
    return 1;
    //return TempFile::handleExceptions();
}                                       // Handle ctor exceptions here
