#include "line/line.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    Line line;
    
    if (line.getLine())
    {
        string currentText;
        while (currentText = line.next(), !currentText.empty())
            cout << currentText << '\n';
    }
}
