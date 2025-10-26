#include "main.ih"

int main(int argc, char **argv)
{
    Wrap w1{ 42 };
    cout << "Value: " << w1.value() << '\n';

    Wrap w2{ "hello world" };
    cout << "Value: " << w2.word() << '\n';

    cout << "Value: " << w2.word() << '\n';

    w1 = w2;

    cout << "Value: " << w1.word() << '\n';

    double dValues[] = { 1,    2.3,  4,   5.6,   7, 
                         8.9, 10,   12.3, 3.14, 42 }; 
    Wrap w3{ dValues };
    
    //for (size_t index = 0; index != 10; ++index)
    //    cout << w3.doubles(index) << '\n';
}
