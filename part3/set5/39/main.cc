#include "main.ih"

int main()
{
    vector<int> values{4, 2, 5, 1, 3};
    mySort(values.begin(), values.end());
    
    for (int element : values)
        cout << element << '\n';
    
    // failing example:
    // std::list<int> values2{4, 2, 5, 1, 3};
    // mySort(values2.begin(), values2.end());
}   
