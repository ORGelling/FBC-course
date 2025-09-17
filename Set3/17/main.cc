#include <SumHeader>

int main(int argc, char const *argv[])
{
    int intSum = sum({ 5, 8, 3, 6, 12, 182 });
    double doubleSum = sum({ 8.37, 3.332, 8.0008, 15.1515 });
    
    std::cout << "ints: " << intSum << "\ndoubles: " << doubleSum << '\n';
}
