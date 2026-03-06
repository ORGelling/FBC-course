#include "main.ih"

int main()
{
    constexpr int intVal = -1971962;
    
    cout << "value: " << NrTrait<intVal>::value << '\n'
         // << NrTrait<intVal>::absolute << '\n'
         << "is " << (NrTrait<intVal>::even ? "" : "not ") << "even\n"
         << "is " <<(NrTrait<intVal>::by3 ? "" : "not ") << "divisible by 3\n"
         << "has width: " << NrTrait<intVal>::sum_of_digits << '\n';
}
