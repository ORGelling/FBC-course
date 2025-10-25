#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    while(true)
    {
        cout << "Tell me something: ";
        getline(cin, input);
        if (input == "exit")
            break;
        
        cout << "This is what you told me: " << input << '\n';
    }
}
