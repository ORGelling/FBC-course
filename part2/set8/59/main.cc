#include "main.ih"

int main()
{
    size_t arraySize = 100;
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
    
    myqsort(intArr, intArr + arraySize);

    copy(intArr, intArr + arraySize, ostream_iterator<int>(cout, " "));
    cout << '\n';
}
