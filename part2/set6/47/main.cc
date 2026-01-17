#include "main.ih"

int main()
{
    vector<unsigned> tablesOfTwo(10);
    iota(tablesOfTwo.begin(), tablesOfTwo.end(), DoubleStep(0));
    
    copy(tablesOfTwo.begin(), tablesOfTwo.end(), 
                    ostream_iterator<unsigned>(cout, " "));
    cout << '\n';
}
