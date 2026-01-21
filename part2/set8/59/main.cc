#include "main.ih"

int main()
{
    size_t const arraySize = 100;       // can use input to parse if we want
    int intArr[arraySize];
    
    mt19937 gen(42);
    uniform_int_distribution<> dist(0, 1000);
    
    generate(intArr, intArr + arraySize, 
        [&]()
        {
            return dist(gen);
        }
    );
    
    copy(intArr, intArr + arraySize, ostream_iterator<int>(cout, " "));
    cout << '\n';
    
    mtqsort(intArr, intArr + arraySize);

    copy(intArr, intArr + arraySize, ostream_iterator<int>(cout, " "));
    cout << '\n';
}
