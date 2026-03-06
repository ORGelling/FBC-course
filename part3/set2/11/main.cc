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
    
    Unique<size_t>{};
    Unique<size_t> nontmp;
    
    cout << Unique<string>::global_count() << ' ' 
             << Unique<string>::global_actual() << '\n'
         << Unique<int>::global_count() << ' ' 
            << Unique<int>::global_actual() << '\n'
         << Unique<char>::global_count() << ' ' 
            << Unique<char>::global_actual() << '\n';
}
