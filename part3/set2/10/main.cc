#include "main.ih"

int main()
{
    Unique<string> one;
    Unique<int> two;
    Unique<char> three{ 'c' };
    
    Unique copied{ one };
    Unique moved{ move(one) };
    
    {
        Unique<string> tmpStr;
        Unique<int> tmpInt;
        Unique<string> tmpStr2;
        Unique<int> tmpInt2;
    }

    cout << Unique<string>::count() << ' ' << Unique<string>::actual() << '\n'
         << Unique<int>::count() << ' ' << Unique<int>::actual() << '\n'
         << Unique<char>::count() << ' ' << Unique<char>::actual() << '\n';
}
