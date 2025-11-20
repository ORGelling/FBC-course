#include "data/data.h"

#include <iostream>

using namespace std;

int main()
{
    double *array = new double[10]();
    Data doubles{ array };
    
    for (size_t index = 0; index != 10; ++index)
        doubles.setDouble(index, 1.1 * index);
    
    Data word{ "This is a union with its text field filled!" };
    
    Data value{ 42 };
    
    cout << word.word() << '\n';
    cout << doubles.array()[9] << '\n';
    
    cout << "copying:\n";
    Data copiedDoubles(doubles, DOUBLE);
    cout << copiedDoubles.array()[9] << '\n';
    
    cout << "swapping:\n";
    word.swap(STRING, value, VALUE);
    cout << value.word() << '\n';
    cout << word.value() << '\n';
    
    cout << "moving:\n";
    Data moved(move(doubles), DOUBLE);
    cout << moved.array()[3] << '\n';
    cout << doubles.array() << '\n';
}
