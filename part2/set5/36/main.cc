#include "main.ih"

int main()
{
    Strings stringVector;
    string str;
  //while (cin >> str)
    while (getline(cin, str))
        stringVector += str;
    
    //cerr << "Object constructed. Operations follow:\n\n";
    
    stringVector[2] = "Inserting line using Proxy";
    stringVector += stringVector[2];
    
    //cerr << "\nOperations done. Printing follows:\n\n";
    
    for (size_t index = 0; index != stringVector.size(); ++index)
        cout << stringVector.at(index) << '\n';
}
