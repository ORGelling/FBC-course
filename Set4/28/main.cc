#include "line/line.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    Line line;
    
    if (line.getLine())
        while (true)
        {
            if (string currentText = line.next(); currentText == "")
                break;
            else
                cout << currentText << '\n';
        }
}
